#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int lim_inf = 50;
	int lim_sup = 150;
	int sum = 0;
	for (int i=0;i<2000;i++)
	
	{
	int valor = lim_inf + rand()%(lim_sup + 1 - lim_inf);
	
	if(valor > 100)
	  sum += 12;
	else 
	  sum += 10;
  }
  
  cout << "costo es : " <<(sum * 19)<<endl;   
   return 0;
}
