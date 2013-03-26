#ifndef __MIPS_REGISTER_H__
#define __MIPS_REGISTER_H__
 
#include "Table.h"
 
 
// define all register code 
// and make hash table
 
#define REG_ZERO  0
#define REG_V0  	2
#define REG_V1		3
#define REG_A0		4
#define REG_A1		5
#define REG_A2		6
#define REG_A3		7
#define REG_T0		8
#define REG_T1		9
#define REG_T2		10
#define REG_T3		11
#define REG_T4		12
#define REG_T5		13
#define REG_T6		14
#define REG_T7		15
#define REG_S0		16
#define REG_S1		17
#define REG_S2		18
#define REG_S3		19
#define REG_S4		20
#define REG_S5		21
#define REG_S6		22
#define REG_S7		23
#define REG_T8		24
#define REG_T9		25
#define REG_GP		28
#define REG_SP		29
#define REG_FP		30
#define REG_RA		31
 
static symstrcut REG_lookuptable[] = {
	{"$zero",	REG_ZERO},
	{"$v0",		REG_V0	},
	{"$v1",		REG_V1	},
	{"$a0",		REG_A0	},
	{"$a1",		REG_A1	},
	{"$a2",		REG_A2	},
	{"$a3",		REG_A3	},
	{"$t0",		REG_T0	},
	{"$t1",		REG_T1	},
	{"$t2",		REG_T2	},
	{"$t3",		REG_T3	},
	{"$t4",		REG_T4	},
	{"$t5",		REG_T5	},
	{"$t6",		REG_T6	},
	{"$t7",		REG_T7	},
	{"$s0",		REG_S0	},
	{"$s1",		REG_S1	},
	{"$s2",		REG_S2	},
	{"$s3",		REG_S3	},
	{"$s4",		REG_S4	},
	{"$s5",		REG_S5	},
	{"$s6",		REG_S6	},
	{"$s7",		REG_S7	},
	{"$t8",		REG_T8	},
	{"$t9",		REG_T9	},
	{"$gp",		REG_GP	},
	{"$sp",		REG_SP	},
	{"$fp",		REG_FP	},
	{"$ra",		REG_RA	},
};
 
#endif
