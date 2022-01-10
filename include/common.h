//
// Created by Luis Navarrete Rios on 1/7/22.
//

#ifndef GBC_MEM_H
#define GBC_MEM_H


// Defining sizes based on bytes for registers
using Byte =  unsigned char;
using Word = unsigned short;
// Structure for Memory Address

struct Address {
    Word location;
    //Might need to add more like checking address range
};
#endif //GBC_MEM_H


