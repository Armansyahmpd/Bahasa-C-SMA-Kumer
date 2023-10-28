#include <stdio.h>

// Program pecahan uang
// Buku Siswa IKM Informatika untuk SMA Kelas XI Hal. 34
// Aktivitas SAP-K11-06-U: Menukarkan Uang
// Programmed by : Armansyah, S.Kom, M.Pd
// Guru Informatika SMAN Sumatera Selatan 
// armansyah@smansumsel.sch.id
// Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
// Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas


void cari_kombinasi_minimal(int nilai_target, int pecahan[], int jumlah_pecahan) {
    // Urutkan pecahan secara menurun
    for (int i = 0; i < jumlah_pecahan - 1; i++) {
        for (int j = i + 1; j < jumlah_pecahan; j++) {
            if (pecahan[i] < pecahan[j]) {
                int temp = pecahan[i];
                pecahan[i] = pecahan[j];
                pecahan[j] = temp;
            }
        }
    }

    int kombinasi[100];
    int index = 0;

    for (int i = 0; i < jumlah_pecahan; i++) {
        while (nilai_target >= pecahan[i]) {
            kombinasi[index] = pecahan[i];
            nilai_target -= pecahan[i];
            index++;
        }
    }

    printf("Kombinasi minimal pecahan uang yang diperlukan:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", kombinasi[i]);
    }
}

int main() {
    int pecahan[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 100, 50};
    int jumlah_pecahan = sizeof(pecahan) / sizeof(pecahan[0]);
    int nilai_target;

    printf("Masukkan nilai uang yang diinginkan (kelipatan ribuan): ");
    scanf("%d", &nilai_target);

    if (nilai_target % 1000 != 0) {
        printf("Masukkan nilai yang merupakan kelipatan ribuan.\n");
    } else {
        cari_kombinasi_minimal(nilai_target, pecahan, jumlah_pecahan);
    }

    return 0;
}
