#include "MASTER.h"
#include "tools.h"
void LHLD (string arg1,string registers[],bool flag[],map<string,string> &memory)
{
	registers[6]=memory[arg1];
	registers[5]=memory[increaseAddress(arg1)];
}
