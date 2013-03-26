#ifndef __OP_CODEH_H__
#define __OP_CODEH_H__
 
#include "Table.h"
 
// define all operation code 
// and make hash table
 
#define OP_ADD    0
#define OP_ADDI		8
#define OP_ADDIU	9
#define OP_ADDU		0
#define OP_LUI		15
#define OP_SUB		0
#define OP_SUBU		0
#define OP_SLL		0
#define OP_SRL		0
#define OP_AND		0
#define OP_ANDI		12
#define OP_OR		0
#define OP_ORI		13
#define OP_NOR		0
#define OP_SLT		0
#define OP_SLTI		10
#define OP_SLTIU	11
#define OP_SLTU		0
#define OP_BEQ		4
#define OP_BNE		5
#define OP_J		2
#define OP_JAL		3
#define OP_JR		0
#define OP_LB		32
#define OP_LBU		36
#define OP_LH		33
#define OP_LHU		37
#define OP_LW		35
#define OP_SB		40
#define OP_SH		41
#define OP_SW		43
 
static symstrcut OP_lookuptable[] = {
	{	"add",	OP_ADD		},
	{	"addi",	OP_ADDI		},
	{	"addiu", OP_ADDIU	},
	{	"addu",	OP_ADDU		}, 
	{	"lui",	OP_LUI		},
	{	"sub",	OP_SUB		},
	{	"subu",	OP_SUBU		},
	{	"sll",	OP_SLL		},
	{	"srl",	OP_SRL		},
	{	"and",	OP_AND		},
	{	"andi",	OP_ANDI		},
	{	"or",	OP_OR		},
	{	"ori",	OP_ORI		},
	{	"nor",	OP_SLT		},
	{	"slt",	OP_SLT		},
	{	"slti",	OP_SLTI		},
	{	"sltiu",	OP_SLTIU},
	{	"sltu",	OP_SLTU		},
	{	"beq",	OP_BEQ		},
	{	"bne",	OP_BNE		},
	{	"j",	OP_J		},
	{	"jal",	OP_JAL		},
	{	"jr",	OP_JR		},
	{	"lb",	OP_LB		},
	{	"lbu",	OP_LBU		},
	{	"lh",	OP_LH		},
	{	"lhu",	OP_LHU		},
	{	"lw",	OP_LH		},
	{	"sb",	OP_SB		},
	{	"sh",	OP_SH		},
	{	"sw",	OP_SW		}
};
 
 
#endif
