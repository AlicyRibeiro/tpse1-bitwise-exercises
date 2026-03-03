//1. Crie uma macro chamada CLEAR_BIT(x, b) que limpe o bit na posição b da variável x.


#include <stdio.h>

#define CLEAR_BIT(x, b) ((x) &= ~(1 << (b)))

int main() {
    unsigned char x = 0b11111111;
    CLEAR_BIT(x, 3); // zera o bit 3
    printf("Resultado: 0x%02X\n", x); // Esperado: 0xF7
    return 0;
}
