#include <iostream>
using namespace std;

int main(void) {

    int Nombre;
    int i;

    do {

        cout << "Combien d'étoiles voulez-vous afficher ?" << endl;
        cin >> Nombre;

    } while(Nombre <= 0);

    for (i=1 ; i<=Nombre ; i=i+1) {

        cout << "*";

    }

    return 0;

}
