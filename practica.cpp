/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
#include<stdio.h>

#define TAM_MAX 45
#define TAM_MIN 1

using namespace std;

int llenarVectores(string nombre_est[],float notas_estu[]);
void mostrarVector(string nombre_est[],float notas_estu[],int n);
void ordenarBuble(string nombre_est[],float notas_estu[],int n);
bool vectorLleno(int n);
int buscarDesor(float nota, int n, float, string nombre, string nombre_est[]);
int insertarDesor(string nombre_est[],float notas_estu[],int &n,int pos, string nombre, float nota);

int main()
{
	string nombre_est[TAM_MAX],nombre;
	float notas_estu[TAM_MAX],nota;
	int n,pos,in;
	
	n=llenarVectores(nombre_est,notas_estu);
	mostrarVector(nombre_est,notas_estu,n);
	
	
	 
    {
    	cout<<"\nIngrese nombre y nota del estudiante:";
    	cin>> nombre;
		cin>>nota;
    	
    	do
    	{
    		cout<<"Ingrese nota valida:";
    		cin>>nota;
		}while(nota<0.0 or nota>5.0);
		cout<<"Ingrese posicion a adicionar:";
		cin>>pos;
		
		in=insertarDesor(nombre_est,notas_estu,n,pos,nombre,nota);
		if(in == -1)
		{
			cout<<"No se puede insertar";
		}
	    
	    mostrarVector(nombre_est,notas_estu,n);
	    
		ordenarBuble(nombre_est,notas_estu,n);
	}
	
	
	return 0;
}

int llenarVectores(string nombre_est[],float notas_estu[])
{
	int n;
	
	do
	{
	cout<<"Ingrese el numero de estudiantes"<<"entre"<<" "<<TAM_MIN<<" "<<"y"<<" "<<TAM_MAX<<":";
	cin>>n;
    }while(n>TAM_MAX or n<TAM_MIN);
    
    for(int i=0;i<n;i++)
    {
    	cout<<"\nIngrese nombre y nota del estudiante"<<i+1<<"---->";
		cin>>nombre_est[i];
    	
    	do
    	{
    		cout<<"Ingrese nota valida:";
    		cin>>notas_estu[i];
		}while(notas_estu[i]<0.0 or notas_estu[i]>5.0);
	}
	
	return n;
}

void mostrarVector(string nombre_est[],float notas_estu[],int n)
{
	system("cls");
	
	cout<<"LISTADO DE ESTUDIANTES \n\n";
	
	for(int i=0;i<n;i++)
	{
		cout<<nombre_est[i]<< "\t"<<notas_estu[i]<<endl;
	}
	
	system("pause");
}

void ordenarBuble(string nombre_est[],float notas_estu[],int n)
{
	int i,j,intercambio;
	float auxN;
	string auxNom;
	intercambio=n;
	i=1;
	
	while(i<n and intercambio!=0)
	{
		intercambio=0;
		
		for(j=0;j<n-2;j++)
		{
			if(notas_estu[j]>notas_estu[j+1])
			{
				auxN=notas_estu[j];
				auxNom=nombre_est[j];
				notas_estu[j+1]=auxN;
				nombre_est[j+1]=auxNom;
				intercambio++;
			}
		}
		i++;
	}
	
}


bool vectorLleno(int n)
{
	if(n < TAM_MAX)
	{
		return false;
	}
	   return true;
}

int buscarDesor(float nota, int n, float, string nombre, string nombre_est[])
{
	int i=0;
	
	while(i<n)
	{
		if(nombre==nombre_est[i])
		{
			return i;
		}
		else
		{
			i++;
		}
	}
	return -1;
}

int insertarDesor(string nombre_est[],float notas_estu[],int &n,int pos, string nombre, float nota)
{
	int k;
	if(vectorLleno(n))
	{
		return -1; //no se puede insertar
	}
	else
	{
		if(pos==n)
		{
			nombre_est[n]=nombre;
			notas_estu[n]=nota;
			n++;
		}
		else
		{
			if(pos>=0 and pos<n)
			{
				k=n;
				while(k >= pos)
				{
					nombre_est[k]=nombre_est[k-1];
					notas_estu[k]=notas_estu[k-1];
					k--;
				}
			    nombre_est[pos]=nombre;
			    notas_estu[pos]=nota;
			    n++;
			 } 
		}
	}
}

