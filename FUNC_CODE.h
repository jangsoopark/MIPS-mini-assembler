#ifndef __FUNC_CODE_H__
#define __FUNC_CODE_H__
 
#include "Table.h"
 
 
// define all function code 
// and make hash table
 
#define FUNC_ADD  32
#define FUNC_ADDU  33
#define FUNC_SUB	34
#define FUNC_SUBU	35
#define FUNC_SLL	0
#define FUNC_SRL	2
#define FUNC_AND	36
#define FUNC_OR		37
#define FUNC_NOR	39
#define FUNC_SLT	42
#define FUNC_SLTU	43
#define FUNC_JR		8
 
static symstrcut FUNC_loopuptable[] = {
	{"add",		FUNC_ADD	},
	{"addu",	FUNC_ADDU	},
	{"sub",		FUNC_SUB	},
	{"subu",	FUNC_SUBU	},
	{"sll",		FUNC_SLL	},
	{"srl",		FUNC_SRL	},
	{"and",		FUNC_AND	},
	{"or",		FUNC_OR		},
	{"nor",		FUNC_NOR	},
	{"slt",		FUNC_SLT	},
	{"sltu",	FUNC_SLTU	},
	{"jr",		FUNC_JR		},
};
 
#endif
