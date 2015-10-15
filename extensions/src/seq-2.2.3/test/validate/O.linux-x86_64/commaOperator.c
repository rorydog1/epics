/* C code for program commaOperatorTest, generated by snc from ../commaOperator.st */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"
# line 9 "../commaOperator.st"
#include "../testSupport.h"

/* Variable declarations */


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
}

/* Program entry func */
static void seqg_entry(SS_ID seqg_env)
{
# line 12 "../commaOperator.st"
	seq_test_init(4);
}

/****** Code for state "doit" in state set "myss" ******/

/* Event function for state "doit" in state set "myss" */
static seqBool seqg_event_myss_0_doit(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
	if (TRUE)
	{
		seq_exit(seqg_env);
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "doit" in state set "myss" */
static void seqg_action_myss_0_doit(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 18 "../commaOperator.st"
			int i = 0;
# line 21 "../commaOperator.st"
			testOk1(((i = 1) , testOk1(i == 1) , (i = 2) , testOk1(i == 2) , (i = 3)) == 3);
# line 22 "../commaOperator.st"
			testOk1(i == 3);
		}
		return;
	}
}

/* Program exit func */
static void seqg_exit(SS_ID seqg_env)
{
# line 28 "../commaOperator.st"
	seq_test_done();
}

#undef seqg_var

/************************ Tables ************************/

/* No channel definitions */
#define seqg_chans 0

/* Event masks for state set "myss" */
static const seqMask seqg_mask_myss_0_doit[] = {
	0x00000000,
};

/* State table for state set "myss" */
static seqState seqg_states_myss[] = {
	{
	/* state name */        "doit",
	/* action function */   seqg_action_myss_0_doit,
	/* event function */    seqg_event_myss_0_doit,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_myss_0_doit,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "myss",
	/* states */            seqg_states_myss,
	/* number of states */  1
	},
};

/* Program table (global) */
seqProgram commaOperatorTest = {
	/* magic number */      2002003,
	/* program name */      "commaOperatorTest",
	/* channels */          seqg_chans,
	/* num. channels */     0,
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

#define PROG_NAME commaOperatorTest
#include "seqMain.c"

/* Register sequencer commands and program */
#include "epicsExport.h"
static void commaOperatorTestRegistrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&commaOperatorTest);
}
epicsExportRegistrar(commaOperatorTestRegistrar);