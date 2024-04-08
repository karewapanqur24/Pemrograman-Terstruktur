// array1.cpp
/*
Buatlah 2 buah variabel array.
Array pertama memiliki 9 elemen dengan tipe data double.
Array kedua memiliki 12 elemen dengan tipe data int.
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "double var1:" << endl;
    double var1[9];
    var1[0] = 4.5;
    var1[1] = 12.5;
    var1[2] = 2.5;
    var1[3] = 5.6;
    var1[4] = 3.0;
    var1[5] = 7.8;
    var1[6] = 12.7;
    var1[7] = 9.9;
    var1[8] = 10.1;

    cout << var1[1] << endl;
    cout << var1[2] << endl;
    cout << var1[3] << endl;
    cout << var1[4] << endl;
    cout << var1[5] << endl;
    cout << var1[6] << endl;
    cout << var1[7] << endl;
    cout << var1[8] << endl;
    cout << "\nint var2:" << endl;

    int var2[12];
    var2[0] = 12;
    var2[1] = 13;
    var2[2] = 14;
    var2[3] = 16;
    var2[4] = 43;
    var2[5] = 69;
    var2[6] = 39;
    var2[7] = 29;
    var2[8] = 10;
    var2[9] = 13;
    var2[10] = 48;
    var2[11] = 19;

    cout << var2[0] << endl;
    cout << var2[1] << endl;
    cout << var2[2] << endl;
    cout << var2[3] << endl;
    cout << var2[4] << endl;
    cout << var2[5] << endl;
    cout << var2[6] << endl;
    cout << var2[7] << endl;
    cout << var2[8] << endl;
    cout << var2[9] << endl;
    cout << var2[10] << endl;
    cout << var2[11] << endl;

    return 0;
}