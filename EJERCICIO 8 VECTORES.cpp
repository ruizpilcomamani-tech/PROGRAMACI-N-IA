#include <iostream>
using namespace std;

int main() {
    int A[8],i,b=0,d=0;
    float a=0,c=0;
    for(i=0;i<8;i++)
    {
    	cin>>A[i];
	}
	
	for(i=0;i<8;i++)
	{
		if(A[i]>10.5)
		{
			a=a+A[i];
			b=b+1;
		}
		else
		{
			c=c+A[i];
			d=d+1;
		}
	}
	float Papr=a/b;
	float Pdes=c/d;
	cout<<"promedios "<<Papr<< " "<<Pdes<<endl;
	cout<<"cantidad "<<b<<d<<endl;
}

