#include "MASTER.h"
#include "tools.h"

void SUB(string arg1,string registers[],bool flag[],map<string,string>&memory){
	
			
	if(arg1 != "M"){
	
		int registerID = registerNumber(arg1);              
		registers[0] = hexSub(registers[registerID],registers[0],flag,true);
		
	}
	else{                         

		string address = "";
		address = address + registers[5] + registers[6];
		registers[0] = hexSub(memory[address],registers[0],flag,true);						
	}
}
