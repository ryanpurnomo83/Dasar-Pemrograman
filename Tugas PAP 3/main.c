#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("Nomor 1\n");
    printf("Variabel a berisi angka 10 sedangkan variabel b berisi angka 12. Jika ditukar kedua nilainya, maka nilai masing-masing variabel adalah ");
    int a = 10;
    int b = 12;
    swap_number(&a, &b);
    printf("\n\n");

    printf("Nomor 2\n");
    sum_of_digits(34);
    printf("\n\n");

    printf("Nomor 3\n");
    printf("Bilangan prima antara 1 hingga 10 adalah ");print_prime(10);printf("\n");
    printf("Bilangan prima antara 1 hingga 22 adalah ");print_prime(22); printf("\n\n");

    printf("Nomor 4\n");
    printf("tamat termasuk ");text_palindrome("tamat");
    printf("makan malam ");text_palindrome("makan malam");printf("\n\n");

    printf("Nomor 5\n");
    printf("Angka 2002 termasuk ");num_palindrome(2002);printf("\n");
    printf("Angka 5555 termasuk ");num_palindrome(5555);printf("\n");
    printf("Angka 3030 ");num_palindrome(3030);printf("\n");
    printf("Angka 3401 ");num_palindrome(3401);printf("\n");
    printf("\n\n");

    printf("Nomor 6\n");
    print_pascal(4);printf("\n\n");
    print_pascal(6);
    return 0;
}
