/*

Aktivitas SAP-K11-09: Latihan Karakter dan String
Buku Siswa IKM Informatika untuk SMA Kelas XI Hal. 52
Dalam bahasa C, Soal 2
Membaca sandi, mencetak jumlah karakter berupa angka, huruf, dan simbol. Bedakan huruf kapital, non kapital dan spasi.
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char password[100];
    printf("Masukkan kata sandi: ");
    scanf("%[^\n]", password);

    int angka = 0;
    int hurufKapital = 0;
    int hurufNonKapital = 0;
    int simbol = 0;
    int spasi = 0;

    for (int i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) {
            angka++;
        } else if (isupper(password[i])) {
            hurufKapital++;
        } else if (islower(password[i])) {
            hurufNonKapital++;
        } else if (isspace(password[i])) {
            spasi++;
        } else {
            simbol++;
        }
    }

    printf("Jumlah angka: %d\n", angka);
    printf("Jumlah huruf kapital: %d\n", hurufKapital);
    printf("Jumlah huruf non kapital: %d\n", hurufNonKapital);
    printf("Jumlah simbol: %d\n", simbol);
    printf("Jumlah spasi: %d\n", spasi);

    return 0;
}
