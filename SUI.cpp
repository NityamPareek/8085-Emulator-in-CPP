#include "MASTER.h"
#include "tools.h"

void SUI(string arg, string registers[],bool flag[]){

	registers[0] = hexSub(arg,registers[0],flag,true);
	
}
