#include <iostream>
using namespace std;


int main(void) {

    int Nombre1, Nombre2;
    char Operateur;

    cout << "Veuillez saisir vos deux entiers SVP" << endl;
    cin >> Nombre1 >> Nombre2;

    cout << "Veuillez saisir l'opérateur (+,-,*,/)" << endl;
    cin >> Operateur;

    switch(Operateur) {

    case'+':
        cout << "Addition : " << (Nombre1 + Nombre2) << endl;
        break;

    case'-':
        cout << "Soustraction : " << (Nombre1 - Nombre2) << endl;
        break;

    case'*':
        cout << "Multiplication : " << (Nombre1 * Nombre2) << endl;
        break;

    case'/':

        if (Nombre2 == 0) {

            cout << "Erreur : Division par 0 !" << endl;

        }

        else {

            cout << "Division : " << (Nombre1 / Nombre2) << endl;

        }

        break;

    default:
        cout << "Opération inconnue ..." << endl;
        break;

    }

    return 0;
  
}
