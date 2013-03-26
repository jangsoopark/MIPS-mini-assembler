#include "I_Type.h"
 
#include "Convert.h"
#include "FUNC_CODE.h"
#include "MIPS_REGISTER.h"
#include "OP_CODE.h"
 
// ReadI_Type_I~IV : Read assembly code I-type 
//    			save data to I-type structure
 
// ReadI_Type_I : op rt, rs, immediate
I_Type ReadI_Type_I(char* Instruction)
{
	I_Type inst_data;
	char* tok = NULL;
 
	if(tok = strtok(Instruction, " "))
		inst_data.op = keyfromstring(tok, OP_lookuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rt = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rs = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, "\n"))
		inst_data.immediate = atoi(tok);
 
	return inst_data;
}
 
// ReadI_Type_II : op base rt(offset)
I_Type ReadI_Type_II(char* Instruction)
{
	I_Type inst_data;
	char* tok = NULL;
 
	if(tok = strtok(Instruction, " "))
		inst_data.op = keyfromstring(tok, OP_lookuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rt = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, "("))
		inst_data.immediate = atoi(tok);
	if(tok = strtok(NULL, ")\n"))
		inst_data.rs = keyfromstring(tok, REG_lookuptable);
 
	return inst_data;
}
 
// ReadI_Type_III : op rt, immediate
I_Type ReadI_Type_III(char* Instruction)
{
	I_Type inst_data;
	char* tok = NULL;
 
	inst_data.rs = 0;
 
	if(tok = strtok(Instruction, " "))
		inst_data.op = keyfromstring(tok, OP_lookuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rt = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, "\n"))
		inst_data.immediate = atoi(tok);
 
	return inst_data;
}
 
// ReadI_Type_IV : op rs, rt, offset
I_Type ReadI_Type_IV(char* Instruction)
{
	I_Type inst_data;
	char* tok = NULL;
 
	if(tok = strtok(Instruction, " "))
		inst_data.op = keyfromstring(tok, OP_lookuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rs = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, ", "))
		inst_data.rt = keyfromstring(tok, REG_lookuptable);
	if(tok = strtok(NULL, " \n"))
		inst_data.immediate = atoi(tok);
 
	return inst_data;
}
 
char* I_TypeToBinaryCode(char* dst, I_Type Instruction)
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
	ConvertToBinary(binaryNumber, Instruction.immediate, 16);
	strcat(dst, binaryNumber);
 
	return dst;
}
