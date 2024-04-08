// Menginput Array dan membalikkan Array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int j = n - 1; j >= 0; j--)
//     {
//         cout << arr[j] << " ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan Banyaknya Array: \n";
    cin >> angka;
    int arr[angka];

    for (int i = 0; i < angka; i++)
    {
        cin >> arr[i];
    }
    cout << "Hasil angka terbalik: ";
    for (int j = angka - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    return 0;
}