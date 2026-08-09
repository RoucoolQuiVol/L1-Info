#include <iostream>
using namespace std;

int main(void) {

    int Nombre;
    int Semaines, Jours;

    do {

        cout << "Veuillez saisir un entier strictement positif SVP" << endl;
        cin >> Nombre;

    } while(Nombre <= 0);

    Semaines = Nombre / 7;
    Jours = Nombre % 7;

    cout << Semaines << " semaines et " << Jours << " jours." << endl;

    return 0;

}
