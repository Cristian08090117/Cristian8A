#include<iostream>
#include<math.h>
using namespace std;
bool esPrimo(int n);
int main()
{
    int n, p;
    cout<<"di numero";
    cin>>n;
    if(esPrimo(n)) cout<<"Simon es primo"<<endl;
    else cout <<"Nel no es primo"<<endl;
}
bool esPrimo(int n)
{
    bool p=true;
    int d=2;
    if(n<2) p=false;
    else {
        while(p &&d<=sqrt(n))
        {
            if(n%d ==0){
                p=false;
            }
            d=d+1;
        }
    }
    return p;
}
