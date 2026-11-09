#include <iostream>
using namespace std;

int main() {
    int A[5],i;
    int buscar;
    bool encontrado = 0; 
    
   
    for( i = 0; i < 5; i++)
	 {
    	
        cin >> A[i];
    }


    cin >> buscar;

    
    for(i = 0; i < 5; i++) {
        if(A[i] == buscar) {
            cout  << i << endl;
            encontrado = 1; 
                    
        }
    }

    
    if(encontrado == 0) {
        cout << "ERROR" << endl;
    }

    return 0;
}
