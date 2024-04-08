// array2.cpp

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 9, x = 12;
//     double var2[9];
//     int var1[12];

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Masukkan nilai ke-1: ";
//         cin >> var2[i];
//         cout << "Nilai: " << var2[i] << endl;
//     }
//     for (int j = 0; j < x; j++)
//     {
//         cout << "Masukkan nilai ke-2: ";
//         cin >> var1[j];
//         cout << "Nilai : " << var1[j] << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    cout << *ptr;
    return 0;
}
