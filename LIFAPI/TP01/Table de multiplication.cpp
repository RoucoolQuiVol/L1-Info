#include <iostream>
using namespace std;

int main(void) {

    int Nombre;
    int i;

    do {
      
        cout << "Veuillez saisir un entier positif SVP" << endl;
        cin >> Nombre;

    } while(Nombre < 0);

    for (i=0 ; i<=10 ; i=i+1) {

        cout << Nombre << " x " << i << " = " << (Nombre * i) << endl;
    }

    return 0;
  
}
