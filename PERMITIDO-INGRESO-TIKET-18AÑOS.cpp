#include <iostream>
using namespace std;
int main()

{
	int edad,permitido;
	bool tiket;
	cin>>edad>>tiket;
	permitido=(edad>=18)&& tiket;
	cout<<permitido;
	
}
