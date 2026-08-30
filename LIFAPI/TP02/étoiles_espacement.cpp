#include <iostream>
using namespace std;

int main(void)
{

    int N, i;

    do
    {
        cout << "Veuillez saisir un nombre plus grand que 2 SVP" << endl;
        cin >> N;

    } while (N <= 2);

    cout << '*';

    for (i = 1; i <= (N - 2); i++)
    {

        cout << ' ';
    }

    cout << '*';

    return 0;
}
