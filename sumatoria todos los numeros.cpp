
#include "iostream"
#include "stdlib.h"

using namespace std;
int main()
{
	int min;
	int max; 
	long base = 0;
    int suma;
    int numero;
    
printf("introduzca el valor minimo:");
scanf("%d" ,&min);

printf("introduzca el valor maximo:");
scanf("%d" ,&max);


    for( numero = min; numero <= max; numero++)
    
    if (numero > 0)
 
    suma = base + numero;
		
	   printf("la suma de los numeros es: %d",suma);
      // cout << suma << endl; 
       
    return 0;
}
