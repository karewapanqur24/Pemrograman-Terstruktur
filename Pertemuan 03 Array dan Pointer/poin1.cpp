#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void tampilkanNama(string str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char *endptr;
        long value = strtol(str[i].c_str(), &endptr, 10);
        cout << "Nama : " << endptr << endl;
        cout << "NPM : " << value << endl;
        cout << endl;
    }
}

int main()
{
    // Contoh pemanggilan fungsi tampilkanNama
    string data[] = {"1234567890", "2345678901", "3456789012"};
    tampilkanNama(data, 3);
    return 0;
}
