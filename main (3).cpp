/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float s, j, d;
    cout<<"Ingresar su monto de jornada"<<endl;
    cin>> j;
    cout<<"Ingresar la cantidad de dias trabajados"<<endl;
    cin>> d;
    s=j*d;
    cout<<"El salario es de: ";
    cout<<s;
    return 0;
}
