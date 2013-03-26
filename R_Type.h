#ifndef __R_TYPE_H__
#define __R_TYPE_H__
 
#include <string.h>
#include <stdlib.h>
 
//define R-type sturcture
 
typedef struct 
{
  int op;
  int rs;
	int rt;
	int rd;
	int shamt;
	int funct;
} R_Type;
 
R_Type ReadR_Type(char* Instruction);
char* R_TypeToBinaryCode(char* dst, R_Type Instruction);
 
#endif
