/*
Pseudocode 2: Menghitung Luas Permukaan Kubus
Buku Informatika Kurikulum Merdeka, Hal. 144
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/


#include <stdio.h>

// Fungsi untuk menghitung luas permukaan kubus
float hitungLuasKubus(float sisi) {
    return 6 * sisi * sisi;
}

int main() {
    float sisi;
    printf("Masukkan panjang sisi kubus: ");
    scanf("%f", &sisi);

    float luas_permukaan = hitungLuasKubus(sisi);

    printf("Luas permukaan kubus adalah: %.2f\n", luas_permukaan);

    return 0;
}
