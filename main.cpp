#include <iostream>
using namespace std;

int main() {
    int n, i;
    float numero, max;

    do
    {
        cout<<"Inserisci il numero di numeri da inserire"<<endl;
        cin>>n;
    }
    while(n<1);

    for(i=1; i<=n; i++)
    {
        cout<<"Inserire un numero"<<endl;
        cin>>numero;

        if(i==1)
        {
            max=numero;
        }
        else
        {
            if(numero>max)
            {
                max=numero;
            }
        }
    }

    cout<<"Il massimo numero è "<<max<<endl;
}
