#include <stdio.h>

int main(){
    int i = 4;
    int j = 8;

    int n = ++i * --j;
    int m = i + j--;
    int p = i + j;

    printf("Output N: %d\n", n); // Output 35 (5 * 7) [Pada program dilakukan prefix incement dan decrement lalu di kalikan]
    printf("Output M: %d\n", m); // Output 12 (5 + 7) [Pada program dilakukan postfix decrement sehingga J dijumlahkan terlebih dahulu sebelum di decrement]
    printf("Output P: %d\n", p); // Output 11 (5 + 6) [karena sebelumnya dilakukan decrement pada J sehingga J menjadi 6]

    return 0;
}