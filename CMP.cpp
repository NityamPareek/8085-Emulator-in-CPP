#include "MASTER.h"
#include "tools.h"
void CMP (string arg1,string registers[],bool flag[],map<string,string> &memory)
{
	int l1=arg1.length();

	if(arg1=="M")
	{
		string address=registers[5]+registers[6];
		if(registers[0]<memory[address])
		{
			flag[0]=true;
		}
		else if(registers[0]==memory[address])
		{
			flag[6]=true;
		}
		else
		{
			flag[0]=false;
			flag[6]=false;
		}
	}
	else
	{
		int index=registerNumber(arg1);
		if(registers[0]<registers[index])
		{
			flag[0]=true;
		}
		else if(registers[0]==registers[index])
		{
			flag[6]=true;
		}
		else
		{
			flag[0]=false;
			flag[6]=false;
		}
	}
}
