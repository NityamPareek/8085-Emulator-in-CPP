#include "MASTER.h"
#include "tools.h"

string CM(string arg, string pc, string &sp, map<string,string> &memory, bool flag[]){

    string nextAddr = decimalToHexGen(hexToDecimalGen(pc)+3);

    if(flag[7] == true){
        string loc1 = decimalToHexGen(hexToDecimalGen(sp)-1);
        string loc2 = decimalToHexGen(hexToDecimalGen(sp)-2);

        sp = loc2;

        memory[loc1] = nextAddr.substr(0, 2);
        memory[loc2] = nextAddr.substr(2, 2);

        return arg;

    }
    else{
        return nextAddr;
    }    
}
