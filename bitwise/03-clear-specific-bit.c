//3. Considere unsigned char status = 0b11101111;. Escreva uma linha de código que zere o bit 4.


#include <stdio.h>

int main() {
    unsigned char status = 0b11101111;
    status &= ~(1 << 4); // zera o bit 4
    printf("Resultado: 0x%02X\n", status); // Esperado: 0xEF (sem mudança visível pois já estava 0)
    return 0;
}
