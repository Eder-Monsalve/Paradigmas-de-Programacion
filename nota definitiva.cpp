/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int n,i,j;
int notas[n][4];
float n1,n2,n3,n4;
float notaDefinitiva,suma=0;
i=1;
cout<<"Ingrese la cantidad de estudiantes:";
cin>>n;

while(i<=n)
{ 
	cout<<"**Estudiante"<<i<<endl;
	cout<<"**Ingrese nota 1:";
	cin>>n1;
	
	   while(n1<0.0 or n1>5.0)
	{
		cout<<"Ingrese nota valida:";
		cin>>n1;
	}
	cout<<"**Ingrese nota 2:";
	cin>>n2;
		
		while(n2<0.0 or n2>5.0)
	{
		cout<<"Ingrese nota valida:";
		cin>>n2;
	}
	cout<<"**Ingrese nota 3:";
	cin>>n3;
		
		while(n3<0.0 or n3>5.0)
	{
		cout<<"Ingrese nota valida:";
		cin>>n3;
	}
	cout<<"**Ingrese nota 4:";
	cin>>n4;
		
		while(n4<0.0 or n4>5.0)
	{
		cout<<"Ingrese nota valida:";
		cin>>n4;
	}
	
	notas[i][1]=n1;
	notas[i][2]=n2;
	notas[i][3]=n3;
	notas[i][4]=n4;
	
	i++;
}

 j=1;
 
 while(j<=n)
 {
 	notaDefinitiva=(notas[j][1]+notas[j][2]+notas[j][3]+notas[j][4])/4;
 	cout<<"\nNota definitiva del estudiante"<<" "<<j<<" "<<"es"<<" "<<notaDefinitiva<<endl;
 	
 	j=j+1;
 }

return 0;	
}
