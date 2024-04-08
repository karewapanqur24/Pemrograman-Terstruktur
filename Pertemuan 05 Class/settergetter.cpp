#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    string nama;

public:
    void setNama(string nama)
    {
        this->nama = nama;
    }
    string getNama()
    {
        return nama;
    }
};

int main()
{
    Mahasiswa mhs;
    mhs.setNama("Anta");

    cout << "Nama: " << mhs.getNama() << endl;
}