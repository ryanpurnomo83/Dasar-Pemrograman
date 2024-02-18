#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("Nomor 1\n\n");
    printf("Tahun 2000 merupakan tahun kabisat ");is_kabisat(2000);printf("\n");
    printf("Tahun 2020 merupakan tahun kabisat ");is_kabisat(2020);printf("\n");
    printf("Tahun 2013 merupakan tahun kabisat ");is_kabisat(2013);printf("\n");
    printf("Tahun 2015 merupakan tahun kabisat ");is_kabisat(2015);printf("\n");

    printf("\nNomor2\n\n");
    printf("Banyaknya huruf vokal yang terdapat dalam kata ada");
    hitung_vokal("Laki laki");
    printf(" huruf vokal");
    printf("\n");
    printf("Banyaknya huruf vokal yang terdapat dalam kata ada");
    hitung_vokal("Ada apa sih");
    printf(" huruf vokal");
    printf("\n");
    printf("Banyaknya huruf vokal yang terdapat dalam kata ada");
    hitung_vokal("Ada Ini di Situ");
    printf(" huruf vokal");
    printf("\n");
    printf("Banyaknya huruf vokal yang terdapat dalam kata ada");
    hitung_vokal("Anak kos makan mie");
    printf(" huruf vokal");
    printf("\n\n");

    printf("Nomor 3\n\n");
    printf("Angka 2 ");check_prime(2);
    printf("\n");
    printf("Angka 3 ");check_prime(3);
    printf("\n");
    printf("Angka 9 ");check_prime(9);
    printf("\n");
    printf("Angka 15 ");check_prime(15);
    printf("\n\n");


    printf("Nomor 4\n\n");
    printf("Huruf-huruf yang ada dalam kata Udinus kampus bebas narkoba adalah ");
    char_frequency("Udinus kampus bebas narkoba");
    printf("\n");
    printf("Huruf-huruf yang ada dalam kata Algoritma sangat menyenangkan adalah ");
    char_frequency("Algoritma sangat menyenangkan");
    printf("\n\n");

    printf("Nomor 5\n\n");
    print_diamond(5);
    printf("\n");


    return 0;
}

