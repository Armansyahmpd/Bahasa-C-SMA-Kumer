/*
Pseudocode 5: Mencari Bilangan Terbesar dari Suatu Himpunan Bilangan
Buku Informatika Kurikulum Merdeka, Hal. 145
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/


#include <stdio.h>

int cariBilanganTerbesar(int L[], int size) {
    if (size == 0) {
        return -1; // Jika himpunan L kosong, kembalikan nilai -1 atau null
    }

    int terbesar = L[0]; // Inisialisasi terbesar dengan elemen pertama L

    for (int i = 1; i < size; i++) {
        if (L[i] > terbesar) {
            terbesar = L[i]; // Perbarui nilai terbesar jika ditemukan bilangan yang lebih besar
        }
    }

    return terbesar; // Kembalikan bilangan terbesar
}

int main() {
    int L[] = {3, 8, 2, 10, 5};
    int size = sizeof(L) / sizeof(L[0]);

    int bilanganTerbesar = cariBilanganTerbesar(L, size);

    if (bilanganTerbesar == -1) {
        printf("Himpunan L kosong, tidak ada bilangan terbesar.\n");
    } else {
        printf("Bilangan terbesar dalam himpunan L adalah: %d\n", bilanganTerbesar);
    }

    return 0;
}
