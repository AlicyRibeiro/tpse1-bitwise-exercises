//20. Encontrar o bitwise e, ou e xor dos seguintes casos: (a) 0xC6 com 0x35


#include <stdio.h>

int main() {
    unsigned char a = 0xC6;
    unsigned char b = 0x35;
    
    printf("AND: 0x%02X\n", a & b); // 0x04
    printf("OR : 0x%02X\n", a | b); // 0xF7
    printf("XOR: 0x%02X\n", a ^ b); // 0xF3
    return 0;
}
