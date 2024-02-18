#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    //4
    printf("Nomor 4\n");
    print_nama("Ryan Purnomo\n");
    print_nama("Muhammad Khamdan");
    printf("\n\n");
    //5
    printf("Nomor 5\n");
    printf("dalam kata Laki-laki terdapat huruf sebanyak ");
    len_text("Laki-laki");
    printf("\n");
    printf("dalam kata Ada apa sih terdapat huruf sebanyak ");
    len_text("Ada apa sih");
    printf("\n");
    printf("dalam kata Ada ini di situ terdapat huruf sebanyak ");
    len_text("Ada ini di situ");
    printf("\n\n");
    //6
    printf("Nomor 6\n");
    int arr1[] = {4, 5, 6, 7, 8};
    int arr4[] = {67, 23, 55, 87, 12, 40, 22};
    printf("Nilai maksimal dalam Array 1: %d", max(arr1,5));
    printf("\n");
    printf("Nilai maksimal dalam Array 4: %d", max(arr4,7));
    printf("\n");
    return 0;
}
