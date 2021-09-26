#include <iostream>
using namespace std;

void contar_normal(int);
void contar_reverso(int);


int main(void)
{
    int num_contar;

    cout << "Numero hasta el que desea contar: ";
    cin >> num_contar;

    contar_normal(num_contar);
    cout << "-----" << endl;
    contar_reverso(num_contar);

    return 0;

}

void contar_normal(int n)
{
    int aux = 1;

    while(aux <= n){

        cout << aux << endl;
        aux = aux + 1;
    }
}

void contar_reverso(int m)
{
    if(m >= 1){
        
        cout << m << endl;
        m = m- 1;
        contar_reverso(m);

    }
}

