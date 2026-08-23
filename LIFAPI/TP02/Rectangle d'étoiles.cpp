#include <iostream>
using namespace std;


int main(void) {

    int Longueur, Largeur;

    int i,j;

    do {

        cout << "Quelles sont les dimensions du rectangle : longueur ?" << endl;
        cin >> Longueur;

        cout << "Largeur ?" << endl;
        cin >> Largeur;

    } while(Longueur <= 0 || Largeur <= 0);

    for (i=0 ; i<Largeur ; i++) {

        for (j=0 ; j<Longueur; j++) {

            cout << "*";

        }

        cout << endl;

    }

    return 0;


}
