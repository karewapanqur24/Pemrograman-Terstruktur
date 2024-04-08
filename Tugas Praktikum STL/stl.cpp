#include <iostream>
#include <ctime>
using namespace std;

class KalkulatorUmur
{
private:
    int tanggalLahir, bulanLahir, tahunLahir;

public:
    KalkulatorUmur(int d, int m, int y) : tanggalLahir(d), bulanLahir(m), tahunLahir(y) {}

    void settanggalLahir(int d, int m, int y)
    {
        tanggalLahir = d;
        bulanLahir = m;
        tahunLahir = y;
    }

    void getUmur(int &tahun, int &bulan, int &hari)
    {
        time_t t = time(NULL);
        tm *timePtr = localtime(&t);

        int hariSekarang = timePtr->tm_mday;
        int bulanSekarang = timePtr->tm_mon + 1;
        int tahunSekarang = timePtr->tm_year + 1900;

        tahun = tahunSekarang - tahunLahir;
        bulan = bulanSekarang - bulanLahir;
        hari = hariSekarang - tanggalLahir;

        if (hari < 0)
        {
            int hariDalamBulan[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            if (tahunSekarang % 400 == 0 || (tahunSekarang % 100 != 0 && tahunSekarang % 4 == 0))
                hariDalamBulan[1] = 29;

            hari += hariDalamBulan[(bulanSekarang - 2 + 12) % 12];
            bulan--;
        }

        if (bulan < 0)
        {
            bulan += 12;
            tahun--;
        }
    }
};

int main()
{
    int hari, bulan, tahun;
    cout << "Masukkan tanggal, bulan, dan tahun lahir Anda: \n";
    cin >> hari >> bulan >> tahun;

    KalkulatorUmur hitungUmur(hari, bulan, tahun);
    int umurTahun, umurBulan, umurHari;
    hitungUmur.getUmur(umurTahun, umurBulan, umurHari);
    cout << "Umur Anda adalah " << umurTahun << " tahun " << umurBulan << " bulan dan " << umurHari << " hari.\n";

    return 0;
}
