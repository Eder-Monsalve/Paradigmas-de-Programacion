#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;


int menu ();
char letraDni();
int dibujar_X ();
int main ()
{
   int opcion;
   
   do 
   {
       opcion=menu();
       
       switch(opcion)
       {
           case 1:
           dibujar_X ();
           break;
           
           case 2:
           letraDni();	
           break;
           
           case 3:
           break;
           
           case 0:
           cout << "El programa ha finalizado ";
           break;
           
           default: "Ingrese un dato valido ";
       }
   } while(opcion !=0);
   
   return 0;
   
}

int menu ()

{
    int opcion;
    
    cout << "Seleccione el programa a ejecutar" << endl;
    cout << "1. Dibujo de letras" << endl;
    cout << "2. Calcular la letra de un DNI " << endl;
    cout << "3. Vector 2 " << endl;
    cout << "0. Salir" << endl;
    
    cout << "Ingrese una opcion ";
    cin >> opcion;
    return opcion;
    

}
///// Modulo Letras ////////

int dibujar_X ()
{

int n,n1 = 0,n2 =1;
    char simbolo;
    do{
        cout << "Ingrese numero(impar > 3): ";
        cin >>n;
        cout << "Ingrese cualquier simbolo\n";
        cin >> simbolo;
        n1 = n;
        if(n1%2 == 0){
        	n1 = 1;
		}
    }while(n < 3 || n1 == 1);
    int n3 = n;
	for(int i = 1; i <= n; i++){
		for(int k = 1; k <= n; k++){
			
			if(k == n2 || k == n3){
				cout << (simbolo);
			}else{
				cout << ("  ");
			}
		}
		n2 += 1;
		n3 -= 1;
		cout << "\n";
	}
    system("pause");
    
}

//// Modulo de DNI ////////

char letraDni()
    {
    int a, b=0, l;
    char cifra;
    char letras[]="TRWAGMYFPDXBNJZSQVHLCKE\0";
    printf("Introduzca n§ DNI(8 car)  ");
    for (a=0; a<8; a++)
            {
            cifra=getchar();
            b=b * 10 + (cifra - '0');
            }
    l=b - (b / 23 * 23);
    printf("\n NIF %d - %c\n\n",b,letras[l]);

    }









