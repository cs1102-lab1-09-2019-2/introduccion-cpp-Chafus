#include <iostream>

using namespace std;

int main() {

    int i = 1;

    // Post-incremento asigna i a c y luego incrementa i
    int c = i++;
    cout<<"Post-incremento ejemplo:\n";
    cout<<"El valor de c es: "<<c<<"\n";
    cout<<"El valor de i es: "<<i<<"\n";
    cout<<"\n";
    // resetear i a 1
    i = 1;

    // Pre-incremento incrementa i, luego asigna a c
    c = ++i;

    cout<<"Pre-incremento ejemplo:\n";
    cout<<"El valor de c es: "<<c<<"\n";
    cout<<"El valor de i es: "<<i<<"\n";
    cout<<"\n";
}