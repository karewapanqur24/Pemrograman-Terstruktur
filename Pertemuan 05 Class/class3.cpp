#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string nama;

private:
    string npm;
};

int main()
{
    Mahasiswa mhs;

    cin >> mhs.nama >> mhs.npm;

    cout << "Nama: " << mhs.nama << endl;
    cout << "NPM: " << mhs.npm << endl;
}