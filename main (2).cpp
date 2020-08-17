#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g; 
    cout<<"ingrese los dos numeros" << endl;
    cin >> a;
    cin >> b; 
    c=a+b;
    cout<<"la suma de los dos numeros es" << c << endl;
    d=a-b;
    cout<<"La resta es" << d << endl;
    e=a*b;
    cout<<"La multiplicacion es" << e << endl;
    f=a/b;
    cout<<"La division es"<< f << endl;
    g=a%b;
    cout<<"El cociente o residuo es" << g << endl;

    return 0;
}