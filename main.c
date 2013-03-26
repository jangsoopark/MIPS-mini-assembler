#include <stdio.h>
#include "Convert.h"
#include "Type.h"
#include "Function.h"
 
int main(void)
{
  // FILE pointer 
  // read from file and write to file
	FILE* fin = NULL;
	FILE* fout = NULL;
 
	// Instruction type 
	R_Type R = {0, 0, 0, 0, 0, 0};
	I_Type I = {0, 0, 0, 0};
	J_Type J = {0, 0};
	
	// buffer string 
	// read assembly code 
	// and write machine code
	char* InstPtr = NULL;
	char buffer[512] = {0, };
	char Instruction[128] = {0, };
	char machineCode[44] = {0, };
	char machineCode_out[44] = {0, };
 
	// confirm I-type format
	int i_type_ = 0;
 
	// open file assemblycode.txt and machinecode.txt
	if((fin = fopen("assemblycode.txt", "rt")) == NULL)
	{
		puts("fopen('assemblycode.txt') error!!");
		return 0;
	}
	if((fout = fopen("machinecode.txt", "wt")) == NULL)
	{
		puts("fopen('machinecode.txt') error!!");
		return 0;
	}
 
	// init machine code and printout to file
	initCode(machineCode_out, machineCode);
	fputs(machineCode_out, fout);
	fputs("\n", fout);
 
	// read file line from "assemblycode.txt"
	while(fgets(buffer, 512, fin) )
	{
		// initialize machineCode buffer string 
		// and Instruction buffer string to zero
 
		memset(machineCode, 0, 36);
		memset(Instruction, 0, 128);
		strcpy(Instruction, buffer);			// copy instruction to buffer
		InstPtr = getInstruction(Instruction);	// and get operation code
 
		fputs(buffer,stdout);
 
		// check Instruction type
		// and read instruction and
		// write to structure
		if(IsR_Type(InstPtr))
		{
			R = ReadR_Type(buffer);
			R_TypeToBinaryCode(machineCode, R);
		}
		else if(i_type_ = IsI_Type(InstPtr))
		{
			switch (i_type_)
			{
			case 1:
				I = ReadI_Type_I(buffer);
				break;
			case 2:
				I = ReadI_Type_II(buffer);
				break;
			case 3:
				I = ReadI_Type_II(buffer);
				break;
			case 4:
				I = ReadI_Type_IV(buffer);
				break;
			}
			I_TypeToBinaryCode(machineCode, I);
		}
		else if(IsJ_Type(InstPtr))
		{
			J = ReadJ_Type(buffer);
			J_TypeToBinaryCode(machineCode, J);
		}
		// if instruction is inaccurate 
		// print error message
		else
		{
			puts("Incorrect istruction!!");
			fputs("Incorrect instruction!!", fout);
		}
		
		// divide 32bit machine code to four part
		// and print machine code to "machinecode.txt"
		divide_8bit(machineCode_out, machineCode);
		puts(machineCode_out);
		fputs(machineCode_out, fout);
		fputs("\n", fout);
	}
 
	fclose(fin);
	fclose(fout);
 
	return 0;
}
