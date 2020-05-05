#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int bil;
    cout <<"masukan sebuah bilangan : ";
    cin>>bil;
    if(bil>=0)
        cout<<bil<<" adalah bilangan positif"<<endl;
    else
        cout<<bil<<" adalah bilangan negati"<<endl;
    system("pause");
    return 0;
}
