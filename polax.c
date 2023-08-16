/*
Buku Siswa IKM Informatika untuk SMA Kelas X 
Bab 7 Algoritma dan Pemrograman Hal. 185
Kasus menggambar sebuah pola X dengan menggunakan karakter asterisk (*)
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

#include <stdio.h>

void buatPolaX(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || j == (n - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int ukuran;
    printf("Masukkan ukuran pola: ");
    scanf("%d", &ukuran);

    if (ukuran < 1 || ukuran > 20) {
        printf("Ukuran harus berada dalam rentang 1 hingga 20.\n");
    } else {
        buatPolaX(ukuran);
    }

    return 0;
}
