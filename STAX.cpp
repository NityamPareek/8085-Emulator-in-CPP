#include "MASTER.h"
#include "tools.h"

void STAX(string arg1,string registers[],bool flag[],map<string,string> &memory)
{
	string address="";
	int index=registerNumber(arg1);
	address+=registers[index]+registers[index+1];
	memory[address]=registers[0];
}
