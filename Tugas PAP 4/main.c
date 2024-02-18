#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{

    //Nomor 1
    int a1[10] = {NULL}, a2[10] = {NULL};
    a1[0] = 1; a1[1] = 2; a1[2] = 3; a1[3] = 4; a1[4] = 5; a1[5] = 6;
    a2[0] = 1; a2[1] = 2; a2[2] = 3; a2[3] = 4;
    printf("Nomor 1\n");
    printf("Jumlah array dalam a1 yang terisi adalah ");count_array(a1, 10);printf("\n");
    printf("Jumlah array dalam a2 yang terisi adalah ");count_array(a2, 10);printf("\n\n");
    //Nomor 2
    printf("Nomor 2\n");
    int arr1[] = {3, 5, 38, 44, 47};
    int arr2[] = {3, 44, 38, 5, 47};
    int arr3[] = {5, 10, 7, 90, 40};
    cek_urut(arr1, 5);printf("\n");
    cek_urut(arr2, 5);printf("\n");
    cek_urut(arr3, 5);printf("\n\n");
    //Nomor 3
    printf("Nomor 3\n");
    int arr4[] = {3, 44, 38, 5, 47};
    int arr5[] = {15, 36, 27, 2, 26};
    bubble_sort1(arr4, 5);printf("\n\n");
    bubble_sort1(arr5, 5);printf("\n\n");
    //Nomor 4
    printf("Nomor 4\n");
    int arr6[] = {3, 44, 38, 5, 47};
    int arr7[] = {15, 36, 27, 2, 26};
    bubble_sort2(arr6, 5);printf("\n");
    return 0;
}
