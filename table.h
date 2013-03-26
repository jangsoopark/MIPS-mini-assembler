#ifndef __TABLE_H__
#define __TABLE_H__
 
// define symstruct which is data type for hash table
typedef struct {char* key; int val;  } symstrcut;
 
int keyfromstring(char* key, symstrcut* lookuptable);
 
#endif
