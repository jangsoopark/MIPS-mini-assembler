#ifndef __I_TYPE_H__
#define __I_TYPE_H__
 
#include <string.h>
#include <stdlib.h>
 
//define I-type structure 
 
typedef struct 
{
  int op;
  int rs;
	int rt;
	int immediate;
 
} I_Type;
 
I_Type ReadI_Type_I(char* Instruction);
I_Type ReadI_Type_II(char* Instruction);
I_Type ReadI_Type_III(char* Instruction);
I_Type ReadI_Type_IV(char* Instruction);
char* I_TypeToBinaryCode(char* dst, I_Type Instruction);
 
#endif
