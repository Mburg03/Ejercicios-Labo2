#include <iostream>
using namespace std;


int mcd(int, int);


int main()
{
    
    int num_a = 0, num_b = 0;

    cout << "Ingrese primer num positivo mayor: ";
    cin >> num_a;

    cout << "Ingrese segundo num positivo menor: ";
    cin >> num_b;

    cout << " El mcd es: " << mcd(num_a, num_b);

    return 0;
}


int mcd(int a, int b)
{

    if(a < b) return mcd(b,a);
    if (b == 0) return a;
    return mcd(b, a % b);
}