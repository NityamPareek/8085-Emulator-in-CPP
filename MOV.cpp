#include "MASTER.h"
#include "tools.h"

void MOV (string argument1,string argument2,string registers[],bool flag[],map<string,string> &memory)
{
	if(argument1=="M"&&argument2!="M"){
			string address=registers[5]+registers[6];
			memory[address]=registers[registerNumber(argument2)];
	}
	else if(argument1!="M" && argument2=="M"){
			string address=registers[5]+registers[6];
			registers[registerNumber(argument1)]=memory[address];
		}
	else if(argument1!="M"&&argument2!="M"){
		registers[registerNumber(argument1)]=registers[registerNumber(argument2)];
	}
}
