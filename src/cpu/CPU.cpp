//
//

#include "cpu/CPU.h"
#include "iostream"

void CPU::load(Byte reg1, Byte &reg2){
    reg1 = reg2;
}

//Initializes the CPU

//TODO: Check actual initial values
void CPU::reset_CPU() {
    //Byte Registers

    //Word Registers
    CPU_registers.AF.word = 0x0000;
    CPU_registers.BC.word = 0x0000;
    CPU_registers.DE.word = 0x0000;
    CPU_registers.HL.word = 0x0000;
    CPU_registers.PC.word = 0x0000;
    CPU_registers.SP.word = 0x0000;


}
CPU::CPU() {
    reset_CPU(); //Initializes CPU registers to start
}

//execute instruction based on opcode
void CPU::execute(Byte opcode) {
    //TODO
    int left = opcode  >> 4 & 0xF;
    int right = opcode & 0xF;
    //Might want to create its own look up table for opcodes
    switch (opcode) {
        case 0x00: /*NOP*/ break; case 0x01: /*NOP*/break; case 0x02: /*NOP*/break; case 0x03: /*NOP*/break; case 0x04: /*NOP*/break;
        case 0x05: /*NOP*/break; case 0x06: /*NOP*/break; case 0x07: /*NOP*/break; case 0x09: /*NOP*/break; case 0x0A: /*NOP*/break;
        case 0x0B: /*NOP*/break; case 0x0C: /*NOP*/break; case 0x0D: /*NOP*/break; case 0x0E: /*NOP*/break; case 0x0F: /*NOP*/break;

        case 0x10: /*NOP*/break; case 0x11: /*NOP*/break; case 0x12: /*NOP*/break; case 0x13: /*NOP*/break; case 0x14: /*NOP*/break;
        case 0x15: /*NOP*/break; case 0x16: /*NOP*/break; case 0x17: /*NOP*/break; case 0x19: /*NOP*/break; case 0x1A: /*NOP*/break;
        case 0x1B: /*NOP*/break; case 0x1C: /*NOP*/break; case 0x1D: /*NOP*/break; case 0x1E: /*NOP*/break; case 0x1F: /*NOP*/break;

        case 0x20: /*NOP*/break; case 0x21: /*NOP*/break; case 0x22: /*NOP*/break; case 0x23: /*NOP*/break; case 0x24: /*NOP*/break;
        case 0x25: /*NOP*/break; case 0x26: /*NOP*/break; case 0x27: /*NOP*/break; case 0x29: /*NOP*/break; case 0x2A: /*NOP*/break;
        case 0x2B: /*NOP*/break; case 0x2C: /*NOP*/break; case 0x2D: /*NOP*/break; case 0x2E: /*NOP*/break; case 0x2F: /*NOP*/break;

        case 0x30: /*NOP*/break; case 0x31: /*NOP*/break; case 0x32: /*NOP*/break; case 0x33: /*NOP*/break; case 0x34: /*NOP*/break;
        case 0x35: /*NOP*/break; case 0x36: /*NOP*/break; case 0x37: /*NOP*/break; case 0x39: /*NOP*/break; case 0x3A: /*NOP*/break;
        case 0x3B: /*NOP*/break; case 0x3C: /*NOP*/break; case 0x3D: /*NOP*/break; case 0x3E: /*NOP*/break; case 0x3F: /*NOP*/break;

        case 0x40: /*NOP*/break; case 0x41: /*NOP*/break; case 0x42: /*NOP*/break; case 0x43: /*NOP*/break; case 0x44: /*NOP*/break;
        case 0x45: /*NOP*/break; case 0x46: /*NOP*/break; case 0x47: /*NOP*/break; case 0x49: /*NOP*/break; case 0x4A: /*NOP*/break;
        case 0x4B: /*NOP*/break; case 0x4C: /*NOP*/break; case 0x4D: /*NOP*/break; case 0x4E: /*NOP*/break; case 0x4F: /*NOP*/break;

        case 0x50: /*NOP*/break; case 0x51: /*NOP*/break; case 0x52: /*NOP*/break; case 0x53: /*NOP*/break; case 0x54: /*NOP*/break;
        case 0x55: /*NOP*/break; case 0x56: /*NOP*/break; case 0x57: /*NOP*/break; case 0x59: /*NOP*/break; case 0x5A: /*NOP*/break;
        case 0x5B: /*NOP*/break; case 0x5C: /*NOP*/break; case 0x5D: /*NOP*/break; case 0x5E: /*NOP*/break; case 0x5F: /*NOP*/break;

        case 0x60: /*NOP*/break; case 0x61: /*NOP*/break; case 0x62: /*NOP*/break; case 0x63: /*NOP*/break; case 0x64: /*NOP*/break;
        case 0x65: /*NOP*/break; case 0x66: /*NOP*/break; case 0x67: /*NOP*/break; case 0x69: /*NOP*/break; case 0x6A: /*NOP*/break;
        case 0x6B: /*NOP*/break; case 0x6C: /*NOP*/break; case 0x6D: /*NOP*/break; case 0x6E: /*NOP*/break; case 0x6F: /*NOP*/break;

        case 0x70: /*NOP*/break; case 0x71: /*NOP*/break; case 0x72: /*NOP*/break; case 0x73: /*NOP*/break; case 0x74: /*NOP*/break;
        case 0x75: /*NOP*/break; case 0x76: /*NOP*/break; case 0x77: /*NOP*/break; case 0x79: /*NOP*/break; case 0x7A: /*NOP*/break;
        case 0x7B: /*NOP*/break; case 0x7C: /*NOP*/break; case 0x7D: /*NOP*/break; case 0x7E: /*NOP*/break; case 0x7F: /*NOP*/break;

        case 0x80: /*NOP*/break; case 0x81: /*NOP*/break; case 0x82: /*NOP*/break; case 0x83: /*NOP*/break; case 0x84: /*NOP*/break;
        case 0x85: /*NOP*/break; case 0x86: /*NOP*/break; case 0x87: /*NOP*/break; case 0x89: /*NOP*/break; case 0x8A: /*NOP*/break;
        case 0x8B: /*NOP*/break; case 0x8C: /*NOP*/break; case 0x8D: /*NOP*/break; case 0x8E: /*NOP*/break; case 0x8F: /*NOP*/break;

        case 0x90: /*NOP*/break; case 0x91: /*NOP*/break; case 0x92: /*NOP*/break; case 0x93: /*NOP*/break; case 0x94: /*NOP*/break;
        case 0x95: /*NOP*/break; case 0x96: /*NOP*/break; case 0x97: /*NOP*/break; case 0x99: /*NOP*/break; case 0x9A: /*NOP*/break;
        case 0x9B: /*NOP*/break; case 0x9C: /*NOP*/break; case 0x9D: /*NOP*/break; case 0x9E: /*NOP*/break; case 0x9F: /*NOP*/break;

        case 0xA0: /*NOP*/break; case 0xA1: /*NOP*/break; case 0xA2: /*NOP*/break; case 0xA3: /*NOP*/break; case 0xA4: /*NOP*/break;
        case 0xA5: /*NOP*/break; case 0xA6: /*NOP*/break; case 0xA7: /*NOP*/break; case 0xA9: /*NOP*/break; case 0xAA: /*NOP*/break;
        case 0xAB: /*NOP*/break; case 0xAC: /*NOP*/break; case 0xAD: /*NOP*/break; case 0xAE: /*NOP*/break; case 0xAF: /*NOP*/break;

        case 0xB0: /*NOP*/break; case 0xB1: /*NOP*/break; case 0xB2: /*NOP*/break; case 0xB3: /*NOP*/break; case 0xB4: /*NOP*/break;
        case 0xB5: /*NOP*/break; case 0xB6: /*NOP*/break; case 0xB7: /*NOP*/break; case 0xB9: /*NOP*/break; case 0xBA: /*NOP*/break;
        case 0xBB: /*NOP*/break; case 0xBC: /*NOP*/break; case 0xBD: /*NOP*/break; case 0xBE: /*NOP*/break; case 0xBF: /*NOP*/break;

        case 0xC0: /*NOP*/break; case 0xC1: /*NOP*/break; case 0xC2: /*NOP*/break; case 0xC3: /*NOP*/break; case 0xC4: /*NOP*/break;
        case 0xC5: /*NOP*/break; case 0xC6: /*NOP*/break; case 0xC7: /*NOP*/break; case 0xC9: /*NOP*/break; case 0xCA: /*NOP*/break;
        case 0xCB: /*NOP*/break; case 0xCC: /*NOP*/break; case 0xCD: /*NOP*/break; case 0xCE: /*NOP*/break; case 0xCF: /*NOP*/break;

        case 0xD0: /*NOP*/break; case 0xD1: /*NOP*/break; case 0xD2: /*NOP*/break; case 0xD3: /*NOP*/break; case 0xD4: /*NOP*/break;
        case 0xD5: /*NOP*/break; case 0xD6: /*NOP*/break; case 0xD7: /*NOP*/break; case 0xD9: /*NOP*/break; case 0xDA: /*NOP*/break;
        case 0xDB: /*NOP*/break; case 0xDC: /*NOP*/break; case 0xDD: /*NOP*/break; case 0xDE: /*NOP*/break; case 0xDF: /*NOP*/break;

        case 0xE0: /*NOP*/break; case 0xE1: /*NOP*/break; case 0xE2: /*NOP*/break; case 0xE3: /*NOP*/break; case 0xE4: /*NOP*/break;
        case 0xE5: /*NOP*/break; case 0xE6: /*NOP*/break; case 0xE7: /*NOP*/break; case 0xE9: /*NOP*/break; case 0xEA: /*NOP*/break;
        case 0xEB: /*NOP*/break; case 0xEC: /*NOP*/break; case 0xED: /*NOP*/break; case 0xEE: /*NOP*/break; case 0xEF: /*NOP*/break;

        case 0xF0: /*NOP*/break; case 0xF1: /*NOP*/break; case 0xF2: /*NOP*/break; case 0xF3: /*NOP*/break; case 0xF4: /*NOP*/break;
        case 0xF5: /*NOP*/break; case 0xF6: /*NOP*/break; case 0xF7: /*NOP*/break; case 0xF9: /*NOP*/break; case 0xFA: /*NOP*/break;
        case 0xFB: /*NOP*/break; case 0xFC: /*NOP*/break; case 0xFD: /*NOP*/break; case 0xFE: /*NOP*/break; case 0xFF: /*NOP*/break;

    }
}


