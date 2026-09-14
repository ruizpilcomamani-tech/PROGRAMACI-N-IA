#include <iostream>
using namespace std;
int main()
{
	int a,b,c,h,i;
	cin>>a>>b;
	if(a+b==5)
	{
		b+=3;
		c=2*a+b;
		cout<<c;
	}
	else
	{
		a-=1;
		if((7*a+b)%2==0)
		{
			h=a-b;
			cout<<h;
		}
		else
		{
			i=a*b;
			cout<<i;
		}
	}
}
