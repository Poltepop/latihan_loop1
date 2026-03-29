#include <stdio.h>

int main(){
    int jumlah = 0;
    int ganjil;
    int n = 8;

    for(ganjil = 1; ganjil < n; ganjil += 2){
        jumlah = jumlah + ganjil;
        printf("Jumlah bilangan ganjil positif kurang dari %d is %d\n", n, ganjil);
    }

    return 0;
}