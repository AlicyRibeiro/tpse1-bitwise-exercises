//4. Escreva uma função unsigned char mirror_bits(unsigned char value) que inverta os bits de um byte.


#include <stdio.h>

unsigned char mirror_bits(unsigned char value) {
    unsigned char result = 0;
    for (int i = 0; i < 8; ++i)
        result |= ((value >> i) & 1) << (7 - i);
    return result;
}

int main() {
    unsigned char original = 0b00010110; // espelho esperado: 01101000
    unsigned char mirrored = mirror_bits(original);
    printf("Original:  0x%02X\n", original);
    printf("Espelhado: 0x%02X\n", mirrored);
    return 0;
}
