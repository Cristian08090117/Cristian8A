/* En un edificio de apartamentos existen m apartamentos gratuitos a los que han llegado n solicitantes. 
Su tarea es distribuir los apartamentos para que la mayor parte de solicitantes como sea posible obtengan un apartamento.
Cada solicitante tiene un tama�o de apartamento deseado, y aceptar� cualquier apartamento cuyo tama�o sea lo suficientemente 
cercano al tama�o deseado. La informaci�n del problema ser� proporcionada de la siguiente manera: n, m y k: el n�mero de solicitantes,
el n�mero de apartamentos y la diferencia m�xima permitida. La siguiente l�nea contendr� n enteros a1, a2, ..., an: que representan 
el tama�o de apartamento deseado de cada solicitante. Si el tama�o deseado de un solicitante es x, �l o ella aceptar� cualquier apartamento
cuyo tama�o est� entre x - k y x + k.
La �ltima l�nea contiene m enteros b1, b2, ..., bm: que representa el tama�o de cada apartamento.
La salida del programa ser� un �nico entero que representa el n�mero de solicitantes admitidos que cumplen con los requisitos.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void entrada();

void distribucion();

int n,m,k,i,r;
int a[1000];
int b[1000];
int sum=0;

int main (){
	
    entrada();
    distribucion();
    cout<<"personas aceptadas: "<<sum;
    return 0;
}
void entrada(){
	
    cout<<"\n numero de solicitantes, numero de apartamentos y la diferencia maxima permitida: ";
    cin>>n>>m>>k;
    cout<<"\n tama�o de apartamento: ";
	for( i=0;i<n;i++){
        cin>>a[i];
        
    
    }
    cout<<"\n Tama�o de cada apartamento disponible: ";
    for( r=0;r<m;r++){
        cin>>b[r];
	}    
}
void distribucion(){
	for(i=0;i<n;i++){
    	for(r=0;r<m;r++){
    		if(sum<m){
			if((abs(a[i]-b[r]))<=k){
			sum+=1;
  			a[i]=a[i+1];
			b[r]=b[r+1];
		}
			}
		}
}
}
