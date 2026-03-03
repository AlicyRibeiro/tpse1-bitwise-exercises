//7. Implemente uma função unsigned int circular_right(unsigned int x, int n) que rotacione x para a direita n vezes.

#include <stdio.h>

unsigned int circular_right(unsigned int x, int n) {
    n %= 32;
    return (x >> n) | (x << (32 - n));
}

int main() {
    unsigned int val = 0x80000001; // 10000000...00000001
    unsigned int rot = circular_right(val, 1);
    printf("Original: 0x%08X\n", val);
    printf("Rotacionado: 0x%08X\n", rot); // Esperado: 0xC0000000
    return 0;
}
