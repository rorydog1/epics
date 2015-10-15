# 1 "../opttVar.st"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "../opttVar.st"




program opttVarTest

%%#include "../testSupport.h"

option +s;
# 20 "../opttVar.st"
char msg[60];
assign msg;
monitor msg;
syncq msg 40;

entry {
    seq_test_init(40);
}

ss low_high {
    state low {
        double d;
        option -t;
        entry {
            d = 0.4;
            sprintf(msg, "Entered low, initialize delay to %g sec.",d);
            pvPut(msg);
        }
        when(d>1.1) {
            sprintf(msg, "low, delay = %g, now changing to high",d);
            pvPut(msg);
        } state high
        when(delay(d)) {
            sprintf(msg, "low, delay timeout, reenter low");
            pvPut(msg);
            d += 0.2;
            sprintf(msg, "low, waiting %g secs to iterate",d);
            pvPut(msg);
        } state low
        exit {
            sprintf(msg, "low, print this on exit of low");
            pvPut(msg);
        }
    }

    state high {
        int v;
        entry {
            v = 3;
            sprintf(msg, "Entered high");
            pvPut(msg);
        }
        when(v==0) {
            sprintf(msg, "changing to low");
            pvPut(msg);
        } state low
        when(delay(0.3)) {
            sprintf(msg, "high, delay 0.3 timeout, decr v and re-enter high");
            pvPut(msg);
            v -= 1;
            sprintf(msg, "v = %d",v);
            pvPut(msg);
        } state high
    }
}

ss check {
    char *expected[20] = {
        "Entered low, initialize delay to 0.4 sec.",
        "low, delay timeout, reenter low",
        "low, waiting 0.6 secs to iterate",
        "low, delay timeout, reenter low",
        "low, waiting 0.8 secs to iterate",
        "low, delay timeout, reenter low",
        "low, waiting 1 secs to iterate",
        "low, delay timeout, reenter low",
        "low, waiting 1.2 secs to iterate",
        "low, delay = 1.2, now changing to high",
        "low, print this on exit of low",
        "Entered high",
        "high, delay 0.3 timeout, decr v and re-enter high",
        "v = 2",
        "high, delay 0.3 timeout, decr v and re-enter high",
        "v = 1",
        "high, delay 0.3 timeout, decr v and re-enter high",
        "v = 0",
        "changing to low",
        0
    };
    char **xp;
    int repeat = 1;
    state check_msg {
        entry {
            xp = expected;
            testPass("start 1st round...");
        }
        when (repeat && !*xp) {
            xp = expected;
            testPass("one more time...");
            repeat = 0;
        } state check_msg
        when (!*xp) {
        } exit
        when (pvGetQ(msg)) {
            testOk(strcmp(*xp,msg)==0, "msg=%s", msg);
            xp++;
        } state check_msg
    }
}

exit {
    seq_test_done();
}
