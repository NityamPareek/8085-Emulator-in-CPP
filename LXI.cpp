#include "MASTER.h"
#include "tools.h"
void LXI (string arg1,string arg2,string registers[],bool flags[],map<string,string> &memory, string &sp)
{
	if(arg1=="M")
	{
		registers[5]=arg2.substr(0, 2);
		registers[6]=arg2.substr(2, 2);
	}

	if(arg1=="SP")
	{
		sp = arg2;
	}

	else
	{
		registers[registerNumber(arg1)]=arg2.substr(0, 2);
		registers[registerNumber(arg1)+1]=arg2.substr(2, 2);
	}
}
