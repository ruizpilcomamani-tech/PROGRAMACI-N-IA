#include <iostream>
using namespace std;
int main()
{
	int A[7]={1,5,8,3,30,9,13},i;
	
	int maximo=A[0];
	int minimo=A[0];
		
	for(i=0;i<7;i++)
	{
		if(A[i]>maximo)
		{
			maximo=A[i];
		}
		if(A[i]<minimo)
		{
			minimo=A[i];
		}
	}
	cout<<maximo<< " "<<minimo;
}

