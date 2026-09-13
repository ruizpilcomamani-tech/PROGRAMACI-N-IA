#include <iostream>
using namespace std;
int main()
{
	int a,b,mayor,menor;
	cin>>a>>b;
	mayor=(a>b)*a+(b>=a)*b;
	menor=(a<b)*a+(b<=a)*b;
	cout<<" mayor "<<mayor<<endl<<" menor "<<menor<<endl;
	
}
