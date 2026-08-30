#include <iostream>
using namespace std;

int main(void)
{

    int N, M;

    do {

    cout << "Veuillez saisir la longueur du rectangle." << endl;
    cin >> N;

    cout << "Veuillez saisir la largeur du rectangle." << endl;
    cin >> M;

    } while(N <= 2 || M <= 2);

    // Première longueur du rectangle.

    int i;

    for (i = 1; i <= N; i++)
    {
        cout << '*';
    }

    // Saut a la ligne.

    // Lignes intérieures du rectangle

    cout << endl;

    int j, k;

    for (k = 1; k <= (M - 2); k++)
    {

        cout << '*';

        for (j = 1; j <= (N - 2); j++)
        {

            cout << ' ';
        }

        cout << '*' << endl;
    }

    // Dernière longueur du rectangle.

    for (i = 1; i <= N; i++)
    {
        cout << '*';
    }

    return 0;

    
}
