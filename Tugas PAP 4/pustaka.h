#include <stdio.h>
#include <stdlib.h>


int count_array(int data[], int jml_data){
int jumlah = 0;

for (int i = 0; i <= data[i]; i++){
jumlah++;
}
printf("%d", jumlah);
}

int cek_urut(int data[], int jml_data){

int angka;
int pembanding;
int indbenar = 0;
int indsalah = 0;
for(int k = 0; k < data[k]; k++){
    if(data[k] < data[k+1]){
    indbenar++;
    }else{
    indsalah++;}
}
if(indbenar == 4){
        printf("benar");
    }else{

    printf("salah");}
}


void bubble_sort1(int data[], int jml_data){

int temp;
for(int e = 0; e < jml_data; e++){
    printf("  %d  ", data[e]);
}
printf("\n");
for(int a = 1; a < jml_data; a++){
    for(int b = 0; b < (jml_data-1); b++){
        if(data[b] > data[b+1]){
            temp = data[b];
            data[b] = data[b+1];
            data[b+1] = temp;
        }
    }
    for(int d = 0; d < jml_data; d++){
    printf("  %d  ", data[d]);
}
printf("\n");
}
}


void bubble_sort2(int data[], int jml_data){


int temp;
for(int e = 0; e < jml_data; e++){
    printf("  %d  ", data[e]);
}
printf("\n");
for(int a = 1; a < jml_data; a++){

    for(int b = 0; b < (jml_data-1); b++){
        if(data[b] > data[b+1]){
            temp = data[b];
            data[b] = data[b+1];
            data[b+1] = temp;
        }
    }

for(int d = 0; d < jml_data; d++){
    printf("  %d  ", data[d]);
 }

printf("\n");a++;
}
}
