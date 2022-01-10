
#ifndef MEMORY_H
#define MEMORY_H

#include "common.h"

class Memory {
  const Byte io_reset[0x100];

  Byte cartridge[0x8000];
  Byte sram[0x2000];
  Byte io[0x100];
  Byte vram[0x2000];
  Byte oam[0x100];
  Byte wram[0x2000];
  Byte hram[0x80];

  void copy(Word destination, Word source, size_t length);

  Byte readByte(Word address);
  Word readShort(Word address);
  Word readShortFromStack(void);

  void writeByte(Word address, Byte value);
  void writeShort(Word address, Word value);
  void writeShortToStack(Word value);
};
#endif //MEMORY_H
