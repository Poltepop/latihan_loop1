#include <stdio.h>
#include <stdbool.h>

int main(){
    int nilai;
    int total = 0;
    int pembagi = 1;
    int hasil;
    bool stop;

    while(true){
        printf("Masukan Nilai Untuk Mencari Rata-Rata: ");
        scanf("%d", &nilai);

        total += nilai;
        hasil = total / pembagi++;

        printf("Masukan Lagi [0 (No) /1 (Yes)]: ");
        scanf("%d", &stop);

        if(stop == 0){
            break;
        }
    }

    printf("Rata-rata: %d", hasil);

    return 0;
}