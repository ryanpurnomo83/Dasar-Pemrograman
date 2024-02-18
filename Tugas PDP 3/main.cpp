#include <iostream>

using namespace std;

int main()
{
    int hargamakanandipilih, hargaminumandipilih;
    int menumakanandipilih, menuminumandipilih;
    int Totalbayar;
    string makanandipilih;
    string minumandipilih;
    cout<<"Masukkan nomor makanan yang dipilih: ";cin>>menumakanandipilih;
    cout<<"Masukkan nomor minuman yang dipilih: ";cin>>menuminumandipilih;
    switch(menumakanandipilih){
    case 1:
    makanandipilih="Bakso";
    hargamakanandipilih= 15000;break;
    case 2:
    makanandipilih="Soto";
    hargamakanandipilih= 8000;break;
    case 3:
    makanandipilih="Mie ayam";
    hargamakanandipilih= 11000;break;
    case 4:
    makanandipilih="Pecel";
    hargamakanandipilih= 8000;break;
    case 5:
    makanandipilih="Sate";
    hargamakanandipilih= 20000;break;
    }
    switch(menuminumandipilih){
    case 1:
    minumandipilih="Kopi Item";
    hargaminumandipilih= 5000;break;
    case 2:
        minumandipilih="Teh";
    hargaminumandipilih= 3500;break;
    case 3:
       minumandipilih="Soju";
    hargaminumandipilih= 50000;break;
    case 4:
        minumandipilih="Bir Pletok";
    hargaminumandipilih= 10000;break;
    case 5:
        minumandipilih="Air Mineral";
    hargaminumandipilih= 2500;break;
    }
    Totalbayar = hargamakanandipilih + hargaminumandipilih;
    cout<<"\n";
    cout<< "Pesanan yang anda pesan: \n";
    cout<< makanandipilih << " Rp " << hargamakanandipilih << "\n";
    cout<< minumandipilih << " Rp " << hargaminumandipilih << "\n";
    cout<< "Total harga yang harus dibayar: Rp. "<< Totalbayar <<endl;
    return 0;
}
