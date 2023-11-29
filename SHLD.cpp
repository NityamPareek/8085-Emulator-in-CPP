#include "header/MASTER.h"
#include "header/tools.h"

void SHLD (string arg1, string registers[],bool flag[], map<string,string> &memory){
	memory[arg1]=registers[6];
	memory[increaseAddress(arg1)]=registers[5];
}
