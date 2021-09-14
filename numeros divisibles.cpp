/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2;
    
    cout<<("Ingrese el primer numero= ");
    cin>>numero1;
    cout<<("Ingrese el segundo numero= ");
    cin>>numero2;
    
    if(numero1 !=0 and numero2 !=0){
        if(numero1 >= numero2){
            if(numero1 % numero2 ==0){
                printf("\n \t %d es divisble por %d \n \t El resultado de la division es %d",numero1, numero2, numero1/numero2);
            
            }
            else
            {
                printf("\n \t %d ******* No es divisible por %d \n \t", numero1, numero2);
            }
        }  
        else
        {
            if(numero2 % numero1 == 0)
            {
                printf("\n \t %d es divisble por %d \n \t El resultado de la division es %d", numero2, numero1, numero2/numero1);
            }
            else
            {
                printf("\n \t %d ************ No es divisible por %d \n \t", numero2, numero1);
            }
        }
    }
    else
    {
        cout<< "\n ***************** la division por cero es indeterminada"<<char(7);
    }
    return 0;

}

