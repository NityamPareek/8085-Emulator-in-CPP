#include "MASTER.h"
#include "tools.h"

void DCR(string arg,string registers[],bool flag[],map<string,string>&memory){
		
	if(arg != "M"){
		
		int registerID = registerNumber(arg);
		registers[registerID] = hexSub(registers[registerID],"01",flag,false);
	}
	else{
		string address = "";
		address = address + registers[5] + registers[6];
		memory[address] = hexSub(memory[address],"01",flag,false);
	}
}
