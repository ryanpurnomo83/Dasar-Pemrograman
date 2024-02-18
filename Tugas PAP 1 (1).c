#include <stdio.h>
#include <stdlib.h>


 void print_identitas(){
       printf("============================\n");
       printf("NIM    : A11.2021.13582\nNama   : Ryan Purnomo\nAlamat : Gunungpati, Semarang\n");
       printf("============================\n");
    }

void print_jumlah(int num1, int num2){
    printf("%d+%d=%d", num1,num2,num1+num2);
}

float hitung(int num1, int num2, char opr){
      float hasil;

      if(opr == '+')
        hasil = num1 + num2;
      else if(opr == '-')
        hasil = num1 - num2;
      else if(opr == 'x')
        hasil = num1 * num2;
      else if(opr == '/')
        hasil = num1 / num2;
      else
        printf("Operator tidak ditemukan");

      return hasil;
    }

int main()
{
    //1
    printf("Nomor 1\n");
    print_identitas();
    printf("\n");
    //2
    printf("Nomor 2\n");
    print_jumlah(15, 12);
    printf("\n");
    print_jumlah(44, 29);
    printf("\n\n");
    //3
    printf("Nomor 3\n");
    printf("%f\n",hitung(2,3,'+'));
    printf("%f\n",hitung(9,2,'-'));
    printf("%f\n",hitung(4,3,'x'));
    printf("\n");
    return 0;
}
