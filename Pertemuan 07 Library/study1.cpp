#include <iostream>
#include <vector>
using namespace std;

template <class T>
class PerhitunganKabisat
{
public:
    // Getter
    T *getTahun() const
    {
        return tahun;
    }

    // Setter
    void setTahun(T *tahun)
    {
        this->tahun = tahun;
    }

    bool HitungKabisat() const
    {
        if (*tahun % 4 == 0)
        {
            if (*tahun % 100 == 0)
            {
                if (*tahun % 400 == 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }

private:
    T *tahun;

public:
    // Konstruktor dengan parameter
    PerhitunganKabisat(T *tahun) : tahun(tahun)
    {
    }
};

int main()
{
    int tahun;
    cout << "Masukkan tahun: ";
    cin >> tahun;
    PerhitunganKabisat<int> Kabisat(&tahun);

    if (Kabisat.HitungKabisat())
    {
        cout << *Kabisat.getTahun() << " adalah tahun kabisat" << endl;
    }
    else
    {
        cout << *Kabisat.getTahun() << " bukan tahun kabisat" << endl;
    }

    return 0;
}
