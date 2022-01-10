#include "cpu/Register.h"
#include "iostream"

void Register::setVal(Byte newVal) {
    val = val;
}
void WordRegister::setVal(Word newVal) {
    word = newVal;
}
Word WordRegister::getWord() {
    return word;
}