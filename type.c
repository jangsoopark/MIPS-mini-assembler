#include "Type.h"
 
// getInstruction : separate opcode from instruction
char* getInstruction(char* src)
{
  return strtok(src, " ");
}
 
// ISR_Type : if Instruction is R-type return 1
//  			else return 0
int IsR_Type(char* Instruction)
{
	if(!strcmp(Instruction, "add"))			return 1;
	else if(!strcmp(Instruction, "addu"))	return 1;
	else if(!strcmp(Instruction, "sub"))	return 1;
	else if(!strcmp(Instruction, "subu"))	return 1;
	else if(!strcmp(Instruction, "sll"))	return 1;
	else if(!strcmp(Instruction, "srl"))	return 1;
	else if(!strcmp(Instruction, "and"))	return 1;
	else if(!strcmp(Instruction, "or"))		return 1;
	else if(!strcmp(Instruction, "nor"))	return 1;
	else if(!strcmp(Instruction, "slt"))	return 1;
	else if(!strcmp(Instruction, "sltu"))	return 1;
	else if(!strcmp(Instruction, "jr"))		return 1;
	else									return 0;
}
 
// ISI_Type : if Instruction is I-type_I return 1
//				else if I-type_II return 2
//				else if I-type_III return 3
//				else if I-type_IV return 4
//				else return 0
int IsI_Type(char* Instruction)
{
	if(!strcmp(Instruction, "andi"))		return 1;
	else if(!strcmp(Instruction, "addi"))	return 1;
	else if(!strcmp(Instruction, "addiu"))	return 1;
	else if(!strcmp(Instruction, "ori"))	return 1;
	else if(!strcmp(Instruction, "slti"))	return 1;
	else if(!strcmp(Instruction, "sltiu"))	return 1;
	else if(!strcmp(Instruction, "lb"))		return 2;
	else if(!strcmp(Instruction, "lbu"))	return 2;
	else if(!strcmp(Instruction, "lh"))		return 2;
	else if(!strcmp(Instruction, "lhu"))	return 2;
	else if(!strcmp(Instruction, "lw"))		return 2;
	else if(!strcmp(Instruction, "sb"))		return 2;
	else if(!strcmp(Instruction, "sh"))		return 2;
	else if(!strcmp(Instruction, "sw"))		return 2;
	else if(!strcmp(Instruction, "lui"))	return 3;
	else if(!strcmp(Instruction, "beq"))	return 4;
	else if(!strcmp(Instruction, "bne"))	return 4;
 
	else									return 0;
}
 
//	IsJ_Type : if Instruction is J-type return 1
//				else return 0
int IsJ_Type(char* Instruction)
{
	if(!strcmp(Instruction, "j"))			return 1;
	else if(!strcmp(Instruction, "jal"))	return 1;
	else									return 0;
}
