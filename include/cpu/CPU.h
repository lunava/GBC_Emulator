//
// Created by Luis Navarrete Rios on 1/6/22
// Supposed to follow fetch -> decode -> execute
//

#include "common.h"

#ifndef GBC_CPU_H
#define GBC_CPU_H

class CPU {
    //Creating byte-size registers
    Byte A, F, B, C, D, E, H, L;

    //Creating word-size registers
    Word AF, BC, HL;
    Word SP; // stack pointer
    Word PC; // program counter

    void read();
    Word write();

    void execute(Byte opcode);

};

typedef struct Instruction{
    //Where the rest of the instruction will go
    union{

        //TODO
    };
}Instruction;

#endif //GBC_CPU_H
