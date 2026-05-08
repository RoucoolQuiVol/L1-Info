#include <iostream>
using namespace std;


int main(void) {

    float Val1, Val2;

    cout << "Veuillez saisir vos deux réels SVP" << endl;
    cin >> Val1 >> Val2;

    if (Val1 == Val2) {

        cout << "Les 2 valeurs sont égaux ! " << endl;

    }

    else if (Val1 > Val2) {

        cout << "La plus petite valeur est : " << Val2 << endl;

    }

    else {

        cout << "La plus petite valeur est : " << Val1 << endl;
      
    }

    return 0;

}
