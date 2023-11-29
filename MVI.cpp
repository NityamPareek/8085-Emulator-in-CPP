#include "MASTER.h"
#include "tools.h"

void MVI (string arg1,string arg2,string registers[],bool flags[],map<string,string> &memory){
	
	if(arg1=="M"){
		string address=registers[5]+registers[6];
		memory[address]=arg2;
	}
	else{	
		registers[registerNumber(arg1)] = arg2;
	}
}
