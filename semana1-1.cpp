/*Considere un algoritmo que tome como entrada un entero positivo n. si n
es par, el algoritmo lo divide entre dos, y si es impar, el algoritmo lo
multiplica por tres y le suma uno. El algoritmo repite este procedimiento
hasta que n es uno.
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	int operacion = 0; 
	int n = 0;
	
    cout<<"ingrese un numero: "; cin>>numero; 
    cout<<numero<<" ";
    
    n = numero;
    
	do{
		
		if(n % 2 == 0)
		
		operacion = n / 2;
	
	    else 
	    
	    operacion = n * 3 + 1;
	    
		cout<<operacion<<" "; 
		
		n = operacion;
		
			
	}while(operacion  != 1);
	
	return 0;
}
