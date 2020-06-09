/* En un edificio de apartamentos existen m apartamentos gratuitos a los que han llegado n solicitantes. 
Su tarea es distribuir los apartamentos para que la mayor parte de solicitantes como sea posible obtengan un apartamento.
Cada solicitante tiene un tamaño de apartamento deseado, y aceptará cualquier apartamento cuyo tamaño sea lo suficientemente 
cercano al tamaño deseado. La información del problema será proporcionada de la siguiente manera: n, m y k: el número de solicitantes,
el número de apartamentos y la diferencia máxima permitida. La siguiente línea contendrá n enteros a1, a2, ..., an: que representan 
el tamaño de apartamento deseado de cada solicitante. Si el tamaño deseado de un solicitante es x, él o ella aceptará cualquier apartamento
cuyo tamaño esté entre x - k y x + k.
La última línea contiene m enteros b1, b2, ..., bm: que representa el tamaño de cada apartamento.
La salida del programa será un único entero que representa el número de solicitantes admitidos que cumplen con los requisitos.
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
    cout<<"\n tamaño de apartamento: ";
	for( i=0;i<n;i++){
        cin>>a[i];
        
    
    }
    cout<<"\n Tamaño de cada apartamento disponible: ";
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
