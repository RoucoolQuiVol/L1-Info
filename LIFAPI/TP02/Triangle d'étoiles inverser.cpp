#include <iostream>
using namespace std;


int main(void) {

    int N, i, j;

    cout << "Quelle est la hauteur du triangle ?" << endl;
    cin >> N;   

    while(N <= 0) {

        cout << "ERREUR : Une hauteur ne peut pas etre nulle ou négative !" << endl;
        cin >> N;

    }

    for (i=N ; i>=1 ; i--) {


        for (j=1 ; j<=i ; j++) {


            cout << '*';

        }

        cout << endl;

    }

    return 0;


}
