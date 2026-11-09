#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[100]; 

    cout << "Ingrese un numero N (impar): ";
    cin >> n;

   
    cout << "Ingrese los " << n << " numeros:\n";
    for (int i = 0; i < n; i++)
	 {
        cout << "Numero " << i + 1 << ": ";
        cin >> arr[i];
    }

  
    for (int i = 0; i < n; i++)
	 {
        cout << arr[i] << " ";
    }
   

    int centro = n / 2;
    cout << "El valor del centro es: " << arr[centro] << endl;

    return 0;
}
