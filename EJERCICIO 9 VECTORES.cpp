#include <iostream>

using namespace std;

int main() {
    int A[5],i;
    int B[5];


    for ( i = 0; i < 5; i++)
	 {

        cin >> A[i];
       B[i] = A[i] * 2;
    }

   
    for ( i = 0; i < 5; i++) 
	{
        cout << A[i] << " ";
    }
  

 
    for ( i = 0; i < 5; i++)
    {
        cout << B[i] << " ";
    }
    

    return 0;
}
