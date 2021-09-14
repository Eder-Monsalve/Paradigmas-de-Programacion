/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int i,impares;
    int suma; 
    
    cout<<"Ingrese el valor de n ===> ";
    cin>> n;
    suma = 0;
    impares = 1;
    for(i = 1; i <= n; i++)
    {
        suma = suma + impares;
        impares = impares + 2;
    }
    if(suma == pow (n,2))
    {
        printf(" \n la suma de los %d numeros impares es igual a %d y el cuadrado es %4.0f ", n,suma, pow (n,2));
    }
    else
    {
        printf(" \n La suma de los %d numero impares no es igual a %d ", n, suma);
    }
    return 0;
}