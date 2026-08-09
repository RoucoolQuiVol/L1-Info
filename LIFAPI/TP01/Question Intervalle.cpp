#include <iostream>
using namespace std;


int main(void) {

    int BorneMin, BorneMax;
    int Borne1, Borne2;

    int Valeur;

    cout << "Veuillez saisir vos deux bornes SVP" << endl;
    cin >> Borne1 >> Borne2;

    if (Borne1 > Borne2) {

        BorneMax = Borne1;
        BorneMin = Borne2;
    }

    else {

        BorneMax = Borne2;
        BorneMin = Borne1;
    }

    cout << "Veuillez saisir une valeur entre " << BorneMin <<  " et " << BorneMax << " SVP." << endl;

    cin >> Valeur;

    while(Valeur < BorneMin || Valeur > BorneMax) {

        cout << "ERREUR : Veuillez saisir une valeur entre " << BorneMin <<  " et " << BorneMax << " SVP." << endl;

        cin >> Valeur;


    }

    cout << BorneMin << " <= " << Valeur << " <= " << BorneMax << endl;

    return 0;


}
