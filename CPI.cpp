#include "MASTER.h"
#include "tools.h"
void CPI (string arg1,string registers[],bool flag[],map<string,string> &memory)
{
		
	if(registers[0]<arg1)
	{
		flag[0]=true;
	}
	else if(registers[0]==arg1)
	{
		flag[6]=true;
	}
	else
	{
		flag[0]=false;
		flag[6]=false;
	}
}
