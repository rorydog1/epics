/* C code for program pvGetSyncTest, generated by snc from ../pvGetSync.st */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"
# line 9 "../pvGetSync.st"
#include "../testSupport.h"

/* Variable declarations */
struct seqg_vars_sstest {
# line 16 "../pvGetSync.st"
	double x;
# line 18 "../pvGetSync.st"
	int p;
} seqg_vars_sstest;


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
	{
# line 16 "../pvGetSync.st"
	static double seqg_initvar_x = 0;
	memcpy(&seqg_vars_sstest.x, &seqg_initvar_x, sizeof(seqg_initvar_x));
	}
	{
# line 18 "../pvGetSync.st"
	static int seqg_initvar_p = 1;
	memcpy(&seqg_vars_sstest.p, &seqg_initvar_p, sizeof(seqg_initvar_p));
	}
}

/* Program entry func */
static void seqg_entry(SS_ID seqg_env)
{
# line 12 "../pvGetSync.st"
	seq_test_init(2);
}

/****** Code for state "stest1" in state set "sstest" ******/

/* Event function for state "stest1" in state set "sstest" */
static seqBool seqg_event_sstest_0_stest1(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
	if (TRUE)
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "stest1" in state set "sstest" */
static void seqg_action_sstest_0_stest1(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 23 "../pvGetSync.st"
			int status;
# line 24 "../pvGetSync.st"
			seq_pvPutTmo(seqg_env, 1/*p*/, ASYNC, DEFAULT_TIMEOUT);
# line 25 "../pvGetSync.st"
			testDiag("x=%f", seqg_vars_sstest.x);
# line 26 "../pvGetSync.st"
			status = seq_pvGetTmo(seqg_env, 0/*x*/, SYNC, 0.1);
# line 28 "../pvGetSync.st"
			testOk(status == pvStatTIMEOUT, "pvGet/SYNC, status=%d (%s)", status, status ? seq_pvMessage(seqg_env, 0/*x*/) : "");
# line 29 "../pvGetSync.st"
			testDiag("x=%f", seqg_vars_sstest.x);
		}
		return;
	}
}

/****** Code for state "stest2" in state set "sstest" ******/

/* Event function for state "stest2" in state set "sstest" */
static seqBool seqg_event_sstest_0_stest2(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 33 "../pvGetSync.st"
	if (seq_pvPutComplete(seqg_env, 1/*p*/, 1, FALSE, NULL))
	{
		seq_exit(seqg_env);
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "stest2" in state set "sstest" */
static void seqg_action_sstest_0_stest2(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 34 "../pvGetSync.st"
			int status;
# line 35 "../pvGetSync.st"
			seq_pvPutTmo(seqg_env, 1/*p*/, ASYNC, DEFAULT_TIMEOUT);
# line 36 "../pvGetSync.st"
			testDiag("x=%f", seqg_vars_sstest.x);
# line 37 "../pvGetSync.st"
			status = seq_pvGetTmo(seqg_env, 0/*x*/, SYNC, 10.0);
# line 39 "../pvGetSync.st"
			testOk(status == pvStatOK, "pvGet/SYNC, status=%d (%s)", status, status ? seq_pvMessage(seqg_env, 0/*x*/) : "");
# line 40 "../pvGetSync.st"
			testDiag("x=%f", seqg_vars_sstest.x);
		}
		return;
	}
}

/* Program exit func */
static void seqg_exit(SS_ID seqg_env)
{
# line 46 "../pvGetSync.st"
	seq_test_done();
}

#undef seqg_var

/************************ Tables ************************/

/* Channel table */
static seqChan seqg_chans[] = {
	/* chName, offset, varName, varType, count, eventNum, efId, monitored, queueSize, queueIndex */
	{"pvGetSync", (size_t)&seqg_vars_sstest.x, "x", P_DOUBLE, 1, 1, 0, 0, 0, 0},
	{"pvGetSync.PROC", (size_t)&seqg_vars_sstest.p, "p", P_INT, 1, 2, 0, 0, 0, 0},
};

/* Event masks for state set "sstest" */
static const seqMask seqg_mask_sstest_0_stest1[] = {
	0x00000000,
};
static const seqMask seqg_mask_sstest_0_stest2[] = {
	0x00000004,
};

/* State table for state set "sstest" */
static seqState seqg_states_sstest[] = {
	{
	/* state name */        "stest1",
	/* action function */   seqg_action_sstest_0_stest1,
	/* event function */    seqg_event_sstest_0_stest1,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_sstest_0_stest1,
	/* state options */     (0)
	},
	{
	/* state name */        "stest2",
	/* action function */   seqg_action_sstest_0_stest2,
	/* event function */    seqg_event_sstest_0_stest2,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_sstest_0_stest2,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "sstest",
	/* states */            seqg_states_sstest,
	/* number of states */  2
	},
};

/* Program table (global) */
seqProgram pvGetSyncTest = {
	/* magic number */      2002003,
	/* program name */      "pvGetSyncTest",
	/* channels */          seqg_chans,
	/* num. channels */     2,
	/* state sets */        seqg_statesets,
	/* num. state sets */   1,
	/* user var size */     0,
	/* param */             "",
	/* num. event flags */  0,
	/* encoded options */   (0 | OPT_CONN | OPT_NEWEF),
	/* init func */         seqg_init,
	/* entry func */        seqg_entry,
	/* exit func */         seqg_exit,
	/* num. queues */       0
};

#define PROG_NAME pvGetSyncTest
#include "seqMain.c"

/* Register sequencer commands and program */
#include "epicsExport.h"
static void pvGetSyncTestRegistrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&pvGetSyncTest);
}
epicsExportRegistrar(pvGetSyncTestRegistrar);