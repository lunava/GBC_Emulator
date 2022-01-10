//
// Supposed to follow fetch -> decode -> execute
//
#ifndef GBC_CPU_H
#define GBC_CPU_H
#include "Register.h"
#include "memory/Memory.h"

class CPU {
public:
    struct Registers{
        PairRegister AF;
        PairRegister BC;
        PairRegister DE;
        PairRegister HL;
        //Special Registers
        WordRegister SP;
        WordRegister PC;
    }CPU_registers;

    //Assumes that we will have memory TODO
    Memory memory;
    CPU();
    void reset_CPU();

    void fetch();
    void decode();
    void execute(Byte opcode);
    //TODO: THESE MIGHT REQUIRE ADDRESS PARAMS
    //Instructions functions
    // Diff Load Instructions
        //TODO: Will need to change to actual Address
        //8 Bit
    void load(Register reg1, Register reg2);
    void load(Register reg1, Word reg2);
        //TODO
    void load(Word reg1, Byte &reg2);
    void load(Word reg);
    void loadi(Word reg);
    void loadd(Word reg);
        //16 bit
    void load(Word reg1, Word &reg2);
    void push(Word &reg);
    void pop(Word &reg);

    // Diff Arithmetic functions
        // 8 bit
    void add(Byte reg1);
    void adc(Byte reg1);
    void sub(Byte reg1);
    void sbc(Byte reg1);
    void and_in(Byte reg1);
    void xor_in(Byte reg1);
    void or_in(Byte reg1);
    void comp(Byte reg1);
    void inc(Byte reg1);
    void dec(Byte reg1);
    void daa(Byte reg1);
    void cpl(Byte reg1);
        // 16 bit
    void add(Word reg1);
    void inc(Word w);
    void dec(Word w);


    //Rotate and Shift Instructions
    void rot_left(Byte reg);
    void rot_right(Byte reg);
    void shift_left(Byte reg);
    void shift_right(Byte reg);
    void swap(Byte reg);
    void sra(Byte reg);
    void srl(Byte reg);


    //Single Bit operations
    void test_bit(Byte reg, int n);
    void set_bit(Byte reg, int n);
    void res_bit(Byte reg, int n);


    //CPU Control Instructions
    void ccf();
    void scf();
    void nop();
    void halt();
    void stop();
    void di();
    void ei();

    //Jump instructions
    void jump(Word w);
    void j_rel(Word w);
    void call(Word w);
    void ret(Word w);


    void interrupt();

};

#endif GBC_CPU_H

