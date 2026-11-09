#include <iostream>

using namespace std;

int main() 
{

    int a[5], b[5], suma[5],i,n;

    for ( i = 0; i < n; i++)
	 {
      
        cin >> a[i];
    }

  
    for (i = 0; i < n; i++)
	 {
        
        cin >> b[i];
    }

    for (i = 0; i < n; i++)
	 {
        suma[i] = a[i] + b[i];
    }

    for ( i = 0; i < n; i++)
	 {
        cout << suma[i] << " ";
    }



}
