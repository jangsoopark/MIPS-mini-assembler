#include "J_Type.h"
 
#include "Convert.h"
#include "FUNC_CODE.h"
#include "MIPS_REGISTER.h"
#include "OP_CODE.h"
 
// ReadJ_Type : Read assembly code J-type 
//    			save data to J-type structure
//					op instr_index
J_Type ReadJ_Type(char* instruction)
{
	J_Type inst_data;
	char* tok;
 
	tok = strtok(instruction, ", ");
	inst_data.op = keyfromstring(tok, OP_lookuptable);
	tok = strtok(NULL, "\n ");
	inst_data.instr_index = atoi(tok);
 
	return inst_data;
}
 
char* J_TypeToBinaryCode(char* dst, J_Type Instruction)
{
	char binaryNumber[32] = {0, };
 
	memset(dst, 0, 36);	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.op, 6);
	strcat(dst, binaryNumber);
	
	memset(binaryNumber, 0, 32);
	ConvertToBinary(binaryNumber, Instruction.instr_index, 26);
	strcat(dst, binaryNumber);
 
 
	return dst;
}
