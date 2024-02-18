#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



int is_kabisat(int year){
    bool value = true;
    if(year % 4 == 0){
        printf("%d true ", value);
    }
    else{
        value = false;
        printf("%d false ", value);
    }
}


int hitung_vokal(char text[]){
    int jumlah = 0;
    int i;
        for(i=0;i<=strlen(text);i++){
            if(text[i]=='a' || text[i]=='A'){
                jumlah++;
            }
            else if(text[i]=='i'|| text[i]=='I'){
                jumlah++;
            }
            else if(text[i]=='u' || text[i]=='U'){
                jumlah++;
            }
            else if(text[i]=='e' || text[i]=='E'){
                jumlah++;
            }
            else if(text[i]=='o' || text[i]=='O'){
                jumlah++;
            }

        }
        printf(" %d", jumlah);
    }



int check_prime(int num){
    int hitung=0;
    for(int b=1; b<=num; b++){

        if(num%b==0)
        {
            hitung++;
        }
    }
    if(hitung==2)
        printf("Merupakan Angka Prima");
    else
        printf("Bukan merupakan Angka Prima");
}


void char_frequency(char text[]){
    int jumlah = 0;
    char c;
    for(c='A'; c<='z'; c++){
        jumlah=0;
        for(int i=0;i<text[i]!=NULL;i++){
            if(c==text[i])
                jumlah++;
        }
        if(jumlah>0)
        printf("%c: %d, ",c,jumlah);
    }
}




void print_diamond(int row){
    for(int i = 1; i <= row; i++){
        for(int j = row; j > i; j--){
                printf(" "); }
            for(int k = 1; k <= (2*i-1); k++){
                     printf("*");
        }
        printf("\n");
    }
    for(int l = 2; l<=row; l++){
         for(int m = 1; m < l; m++){
                printf(" "); }
            for(int n = row; n >= (2*l-row); n--){
                     printf("*");
        }
        printf("\n");
    }
}
