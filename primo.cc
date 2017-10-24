//Programa para comprobar si un nùmero es primo 
#include <iostream>
using namespace std;
int main()
{
  long N=12;
  long Flag=0;
  long divisor=0;
cout<<"Inserte un nùmero "<<endl; cin>>N;
for(long i=2; i<=N/2; i++)
  {
    if (N%i==0){
      Flag=1; divisor=i; break;}
  }
 if(Flag==1){
   cout<<"Tu nùmero no es primo " <<endl;
 cout<<"porque se divide entre " <<divisor <<endl;
} 
 else
   cout<<"Tu nùmero es primo " <<endl;
 return 0;
}
