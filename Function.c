#include "Function.h"
#include <string.h>
 
// divide_8bit : when program print machine code 
//    		this function count 8bit and put space
//				
char* divide_8bit(char* dst, char* src)
{
	int i, j;
 
	for(j=0, i=0; src[i]; i++, j++)
	{
		if(i%8 == 0 && i>0)	dst[j++] = ' ';
		dst[j] = src[i];
		
	}
	return dst;
}
 
// initCode : when first print machine code 
//			this function init macine code 
//			to 32bit 0
//
 
char* initCode(char* dst, char* src)
{
	memset(src, '0', 32);
	src[33] = '\0';
	return divide_8bit(dst, src);
}
