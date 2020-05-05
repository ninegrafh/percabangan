#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int sila;

    cout<<"Masukan Sila ke- : ";
    cin>>sila;

    switch(sila) {
        case 1:
        cout<<"Ketuhanan Yang Maha Esa"<<endl;
        break;
        case 2:
        cout<<"Kemanusiaan yang Adil dan Beradab"<<endl;
        break;
        case 3:
        cout<<"Persatuan Indonesia"<<endl;
        break;
        case 4:
        cout<<"Kerakyatan yang dipimpin oleh Hikmad Kebijaksanaan"<<endl
        <<"dalam Permusyawaratan/Perkawilan"<<endl;
        case 5:
        cout<<"Keadilan Sosial bagi seluruh Rakyat Indonesia"<<endl;
        break;
        default:
        cout<<"Tidak ada"<<endl;
        break;
    }
        system("pause");
        return 0;
}
