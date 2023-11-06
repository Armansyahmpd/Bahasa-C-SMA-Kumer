/*
Problem 5 : Perbaikan Program
Buku Informatika Kurikulum Merdeka, Hal. 169
Oleh : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/


#include <stdio.h>

int main() {
    float jr2;
    float l;
    float O;

    // Gunakan & sebelum jr2 dalam scanf
    scanf("%f", &jr2);

    l = 3.14 * jr2 * jr2;
    O = 2 * 3.14 * jr2;

    // Perbaiki format printf dengan %.2f
    printf("%.2f %.2f\n", l, O);

    return 0;
}



/*
Perbaikan yang telah dilakukan:
Ditambahkan #include <stdio.h> untuk mengimpor library yang diperlukan.
Digunakan & sebelum jr2 dalam fungsi scanf agar nilai input yang dimasukkan oleh user dapat disimpan dalam variabel jr2.
Diperbaiki format dalam fungsi printf dengan menggunakan %.2f untuk mengontrol angka desimal menjadi dua digit di belakang koma.
Variabel l dan O dideklarasikan dan diinisialisasi dengan benar.
Dengan perbaikan ini, program sekarang akan berjalan dengan benar. 
Program ini akan meminta user untuk memasukkan nilai jr2 (jari-jari), menghitung luas dan keliling lingkaran, dan 
kemudian menampilkan hasilnya dengan dua digit di belakang desimal.
*/
