/*
Program Bubble Sort
Buku Siswa IKM Informatika untuk SMA Kelas X 
Bab 2 Berpikir Komputasional Hal. 31
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

#include <stdio.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tukar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int angka[5];

    printf("Masukkan 5 angka:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &angka[i]);
    }

    int panjang = sizeof(angka) / sizeof(angka[0]);

    printf("Angka sebelum diurutkan:\n");
    for (int i = 0; i < panjang; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");

    bubbleSort(angka, panjang);

    printf("Angka setelah diurutkan:\n");
    for (int i = 0; i < panjang; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");

    return 0;
}
