// Mencetak array terbalik

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> angka;
    int x;

    while (cin >> x)
    {
        angka.push_back(x);
    }

    for (int i = angka.size() - 1; i >= 0; i--)
    {
        cout << angka[i] << " ";
    }

    return 0;
}
