#include "MASTER.h"
#include "tools.h"

void POP(string arg, string registers[], string &sp, map<string,string> &memory){

    string loc1 = decimalToHexGen(hexToDecimalGen(sp)+1);
    string loc2 = decimalToHexGen(hexToDecimalGen(sp)+2);

    registers[registerNumber(arg)] = memory[loc1];
    registers[registerNumber(arg)+1] = memory[sp];
    sp = loc2;
}