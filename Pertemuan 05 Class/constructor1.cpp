#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string nama, npm;
    Mahasiswa(string nama, string b)
    {
        this->nama = nama;
        this->npm = b;
    }
};

int main()
{
    Mahasiswa Mhs("Reza", "21227");

    cout << "Nama: " << Mhs.nama << endl;
    cout << "NPM: " << Mhs.npm << endl;
}