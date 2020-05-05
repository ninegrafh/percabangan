#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int pil,jml;
    cout<<"*********HARGA TIKET BUS TRENGGALEK SURABAYA***********"<<endl;
    cout<<"1. EKONOMI"<<endl;
    cout<<"2. PATAS"<<endl;
    cout<<"Masukan Pilihan : ";
    cin>>pil;

    switch(pil) {
        case 1:
            cout<<"Harga Tiket Rp 45.000/Org" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jml;
            cout<<endl;
            cout<<"Total Bayar "<<jml*45000<<endl;
        break;
        case 2:
            cout<<"Harga Tiket Rp 55.000/Org" <<endl;
            cout<<"Masukan Jumlah: ";
            cin>>jml;
            cout<<endl;
            cout<<"Total Bayar "<<jml*55000<<endl;
        break;
        default:
            cout<<"Tiket Tidak ada"<<endl;
        break;
    }
        system("pause");
        return 0;
}
