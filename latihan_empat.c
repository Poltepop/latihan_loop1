#include <stdio.h>

int main(){
    int i;
    int hasil = 1;
    int basis = 2;

    for (i = 0; i <= 6; ++i) {
        printf("%3d %3d\n", i, hasil);
        hasil *= basis;
    }

    return 0;
}