#ifndef __J_TYPE_H__
#define __J_TYPE_H__
 
#include <string.h>
#include <stdlib.h>
 
//define I-type structure
 
typedef struct 
{
  int op;
  int instr_index;
} J_Type;
 
J_Type ReadJ_Type(char* instruction);
char* J_TypeToBinaryCode(char* dst, J_Type Instruction);
 
#endif
