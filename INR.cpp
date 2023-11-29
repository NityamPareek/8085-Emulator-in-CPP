#include "MASTER.h"
#include "tools.h"

void INR(string arg,string registers[],bool flag[],map<string,string>&memory){
		
	if(arg != "M"){
		
		int registerID = registerNumber(arg);
		registers[registerID] = hexAdd(registers[registerID],"01",flag,false); 
	}
	else{
		string address = "";
		address = address + registers[5] + registers[6];
		memory[address] = hexAdd(memory[address],"01",flag,false);
	}
}
