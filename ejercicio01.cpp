#include <iostream>
using namespace std;

int main()
{
    int num01;
    int num02;
    char signo;
    cout << "Ingresa dos numeros enteros: ";
    cin >> num01 >> num02;
    cout << "Ingresa el signo de operación + O - O *: ";
    cin >> signo;

    cout << "\tNum1: " << num01 << "\tNum2: " << num02 << "\tsigno: " << signo;
}
