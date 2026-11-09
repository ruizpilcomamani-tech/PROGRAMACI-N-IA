#include <iostream>

using namespace std;

int main() {
    int n,i;
    int v[5], resultado[5];
    int escalar;

  
    for ( i = 0; i < n; i++) {
      
        cin >> v[i];
    }

  
    cin >> escalar;

    
    for ( i = 0; i < n; i++) 
	{
        resultado[i] = v[i] * escalar;
    }

    
    for ( i = 0; i < n; i++) 
	{
        cout << resultado[i] << " ";
    }
    ;
}
