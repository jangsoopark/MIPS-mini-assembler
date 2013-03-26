#include "Table.h"
 
#include <string.h>
 
// define NKEYS() is size of lookuptable
// define BADKEY when program fail to find key 
//    	keyfromstring return BADKEY
 
#define NKEYS(lookuptable)	(sizeof(lookuptable)*sizeof(symstrcut))
#define BADKEY				-1
 
// keyfromstring : search data by using key value in hash table
//					when fail search this function return BADKEY
//
int keyfromstring(char* key, symstrcut* lookuptable)
{
	int i;
 
	for (i=0; i<NKEYS(lookuptable); i++)
	{
		symstrcut* sym = lookuptable + i;
		if(sym->key == NULL)	break;
		if(strcmp(sym->key, key) == 0)
			return sym->val;
	}
	return BADKEY;
}
