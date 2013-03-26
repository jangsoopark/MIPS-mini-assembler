#include "R_Type.h"
 
#include "Convert.h"
#include "FUNC_CODE.h"
#include "MIPS_REGISTER.h"
#include "OP_CODE.h"
#include "Function.h"
 
// ReadR_Type : Read assembly code R-type 
//    			save data to R-type structure
//				op rs, rt, rd
R_Type ReadR_Type(char* Instruction)
{
	R_Type inst_data;
	char* tok = NULL;
 
	inst_data.op = 0;
	inst_data.shamt = 0;
 
	if(tok = strtok(Instruction, " "))
		inst_data.funct = keyfromstring(tok, FUNC_loopuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rd = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rs = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, "\n "))
		inst_data.rt = keyfromstring(tok, REG_lookuptable);
 
	return inst_data;
}
 
char* R_TypeToBinaryCode(char* dst, R_Type Instruction)
{
	char binaryNumber[32] = {0, };
 
	memset(dst, 0, 36);	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.op, 6);
	strcat(dst, binaryNumber);
	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.rs, 5);
	strcat(dst, binaryNumber);
	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.rt, 5);
	strcat(dst, binaryNumber);
	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.rd, 5);
	strcat(dst, binaryNumber);
	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.shamt, 5);
	strcat(dst, binaryNumber);
	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.funct, 6);
	strcat(dst, binaryNumber);
 
	return dst;
}
