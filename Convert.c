#include "Convert.h"
 
#include <string.h>
 
// ConvertToBinary : convert decimal number to binary code string
//    			this function can convert number in fixed size
char* ConvertToBinary(char* dst, int decimal, int bit_size)
{
	int i;
 
	memset(dst, 0, bit_size);
	for(i=bit_size-1; i>=0; i--)
	{
		dst[i] = (decimal & 0x01) + '0';
		decimal = decimal >> 1;
	}
 
	return dst;
}
