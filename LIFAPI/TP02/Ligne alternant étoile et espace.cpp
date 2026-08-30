#include <iostream>
using namespace std;

int main(void)
{

    int N, i;

    cout << "Taille de la ligne ?" << endl;
    cin >> N;

    for (i = 1; i <= N; i++)
    {

        if (i % 2 == 1)
        {

            cout << '*';
        }

        else
        {

            cout << ' ';
        }
    }

    return 0;
}
