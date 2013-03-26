#ifndef __TYPE_H__
#define __TYPE_H__
 
#include "OP_CODE.h"
#include "FUNC_CODE.h"
#include "MIPS_REGISTER.h"
 
#include "Table.h"
#include "R_Type.h"
#include "I_Type.h"
#include "J_Type.h"
 
char* getInstruction(char* src);
 
int IsR_Type(char* Instruction);
int IsI_Type(char* Instruction);
int IsJ_Type(char* Instruction);
 
#endif
