#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int bil;
    cout <<"masukan nilai ujian : ";
    cin>>bil;
    if(bil>=90)
        cout<<bil<<" Nilai A"<<endl;
    else if(bil<90&&bil>=80)
        cout<<bil<<" Nilai B"<<endl;
    else if(bil<80&&bil>=70)
        cout<<bil<<" Nilai C"<<endl;
    else if(bil<70&&bil>=60)
        cout<<bil<<" Nilai D"<<endl;
    else
        cout<<bil<<" Nilai anda Kurang"<<endl;
    system("pause");
    return 0;
}
