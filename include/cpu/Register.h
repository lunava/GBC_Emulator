/* CPU registers
 *
 * */
#ifndef GBC_REGISTER_H
#define GBC_REGISTER_H
#include "common.h"

//Normal 8 bit Register
struct Register{
    //These will only be usable should we require them
private:
   Byte val;
   //Should Register have their own address TODO
   Address address;
public:
   void setVal(Byte newVal);
   Byte getByte();
   Address getAddress();
};


// Normal 16 bit Register
struct WordRegister {
protected:
    Word word;
    Address address;
public:
    void setVal(Word newVal);
    Word getWord();
    Address getAddress();

};

//Special Class for Register that are paired
struct PairRegister:
        WordRegister {
private:
    Register lo;
    Register hi;
};


//Flag registers for AF Register
struct Flag {
    Byte Z; // 0 iff the operation result is 0 (used in conditional jumps)
    Byte N; // used only in DAA instructions
    Byte H; // used only in DAA instructions
    Byte C; // used in multiple cases; see pandocs
    void toggle_z(); //TODO
};

#endif //GBC_REGISTER_H
