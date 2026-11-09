#include <iostream>

using namespace std;

int main()
 {
   int a,i,suma=0;
   cin>>a;
   int A[a];
   for(i=0;i<a;i++)
   {
   	A[i]=i+1;
   	suma=suma+A[i];
   }
   cout<<suma;
}

