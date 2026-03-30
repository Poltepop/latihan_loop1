#include <stdio.h>
#include <stdbool.h>

int main(){
    int nilai;
    int total = 0;
    int pembagi = 1;
    int hasil;
    char stop;

    do{
        printf("Masukan Nilai Untuk Mencari Rata-Rata: ");
        scanf("%d", &nilai);

        total += nilai;
        hasil = total / pembagi++;

        printf("Masukan Lagi? [y/n]: ");
        scanf(" %c", &stop); 

    } while (stop == 'y' || stop == 'Y');

    printf("Rata-rata: %d", hasil);

    return 0;
}