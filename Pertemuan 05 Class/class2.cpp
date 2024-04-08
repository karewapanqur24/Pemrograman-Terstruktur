#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string nama, npm;

    void perkenalan()
    {
        cout << "Nama: " << nama << endl;
        cout << "NPM: " << npm << endl;
    }
};

int main()
{
    Mahasiswa mhs;

    cin >> mhs.nama >> mhs.npm;

    mhs.perkenalan(); 

}