#include <stdio.h>
#include <stdlib.h>

void print_nama(char nama[]){
    printf("Namanya adalah: %s",nama);
}

int len_text(char text[]){
    int jumlah = 0;

    while(text[jumlah] != '\0'){
        jumlah++;
    }

    printf("%d",jumlah);
    return jumlah;

}

int max(int arr_num[], int n){
    int max = arr_num[0];

    for(int i = 0; i < n; i++){
        if(max < arr_num[i])
            max = arr_num[i];
    }
    return max;
}

