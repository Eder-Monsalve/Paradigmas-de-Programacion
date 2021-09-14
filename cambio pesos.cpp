/******************************************************************************
 Cambio de Moneda: De peso a dolares 
 *****************************************************************************/
 #include <iostream>
using namespace std;

int main ()
{
    float pesos,TRM;
    float dolares;
    
    cout<<("Ingrese pesos --->  ");
    cin>>pesos;
    cout<<("ingrese TMR ---> ");
    cin>>TRM;
    dolares=pesos/TRM;
    cout<< ("Los pesos en dolares son -->  ")<<dolares;
    
    return 0;

}
