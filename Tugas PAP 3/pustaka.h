#include <stdio.h>
#include <stdlib.h>



//Nomor 1
void swap_number(int *num1, int *num2){
int temp;
temp = *num1;
*num1 = *num2;
*num2 = temp;
printf("%d %d", *num1, *num2);
}


//Nomor 2
int sum_of_digits(int digit){

int remain;
int sum = 0;
while(digit!=0){
remain = digit % 10;
sum = sum + remain;
digit = digit / 10;
printf(" %d ", remain);
if(digit>0){
printf("+");
}
 }
 printf(" = %d", sum);
}


//Nomor 3
void print_prime(int num){
int awal = 1;
printf("%d, ", awal);
while(awal < num){
int jumlah_faktor = 0;
for(int i = 1; i <= awal; i++){
if(awal%i==0){
   jumlah_faktor++;
    }
  }
  if(jumlah_faktor==2){
    printf("%d, ", awal);
  }
   awal++;
 }
}


//Nomor 4
int text_palindrome(char text[]){
int p_text = strlen(text) - 1;
int i=0;
while(i < p_text){
    if(text[i++] != text[p_text--]){
        printf("Bukan palindrome");
        return 1;
     }
    }
    printf("palindrome\n");
    return 0;
}


//Nomor 5
int num_palindrome(int num){

int rem,q, hasil=0;
q = num;
while(q != 0){
rem = q%10;
hasil = hasil*10 + rem;
q = q/10;
}
if(hasil == num){
    printf("Angka palindrome");
}else{
    printf("Bukan angka palindrome");
}
}

//Nomor 6
void print_pascal(int row){

int l = 0;
for(int i = 0; i < row; i++){
    for(int j = row - i; j >= 1; j--){
        printf("  ");
    }
    int printChar = 1;
    int num = i;
    int den = 1;
    for(int k = 0; k <= i; k++){
        printf("%d ",printChar);
        printChar = printChar*num;
        printChar = printChar/den;
        num--;
        den++;
        printf("  ");
  }
   printf("\n");
 }
}

