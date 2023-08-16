/*
Buku Siswa IKM Informatika untuk SMA Kelas X 
Bab 7 Algoritma dan Pemrograman Hal. 177
Pengembangan untuk Struktur Kontrol Perulangan
Programmed by : Armansyah, S.Kom, M.Pd
Guru Informatika SMAN Sumatera Selatan 
armansyah@smansumsel.sch.id
Alumni CS50 for Teachers Harvard-Indonesia 2022/2023
Validasi Sertifikat : https://bit.ly/ceksertifikatcs50
Setiap copy-paste dan pengembangan harus mencantumkan informasi HAKI diatas

*/

 #include <stdio.h>
 int main (void)
  int nilai;
  printf("Input Nilai Anda (A - E): ");
  scanf("%d",&nilai);
  if (nilai == 'A' ) {
    printf("Pertahankan! \n");
  }
  
  else if (nilai == 'B' ) {
    printf("Harus lebih baik lagi \n");
  }
else if (nilai == 'C' ) {
    printf("Perbanyak belajar \n");
  }
  else if (nilai == 'D' ) {
    printf("Jangan keseringan main games \n");
  }
  else if (nilai == 'E' ) {
    printf(“Tidak pernah belajar ya ... \n");
  }
  else {
    printf("Maaf, format nilai tidak sesuai \n");
  }
  return 0;  
}
