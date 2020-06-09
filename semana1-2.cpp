/* Te han dado un grupo de n enteros, y tu tarea es encontrar cuatro
valores (en posiciones distintas) que sumen x
Para ello te han pedido escribir un programa que reciba el número
de elementos en el arreglo (n), la total de la suma requerida(x) y
los elementos del arreglo (e1, e2, e3, …, en)
*/
#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

int con=0;
int n,x;
int i,k,j,l;
int e[100];


int main()
{
	for ( i = 0; i <n - 3; i++) 
{ 
    for ( j = i + 1; j <=n - 2; j++) 
    {           
    for ( k = j + 1; k <=n - 1; k++) 
    {
    for ( l = k + 1; l < n; l++) 
        
    if (e[i] + e[j] + e[k] + e[l] == x)
    if(con ==0 ){
                cout << i+1<<", " << j+1  
                     << ", " << k+1 << ", " << l+1<<endl;
                     con+=+1;
					 }
		}
	}  
} 

	int n=sizeof(e) / sizeof(e[0]);
{
	cout<<"\n ingresar el numero de elementos en el arreglo: ";
	cin>>n>>x;
	cout<<"\n ingresar los elementos del arreglo: ";
	for(i=1;i<=n;i++)
	{
		cin>>e[i];

}
}
	if(con==0)
	{
		cout<<"\n imposible";
	}
	return 0;
}

