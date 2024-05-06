/*
Soal Nomor 1
Mencari Posisi Urutan Genap dengan Spasi

Anda akan diberikan array N bilangan bulat dan Anda diminta mencetak bilangan bulat yang
dalam posisi atau urut genap saja.

Format Input

Baris pertama input berisi N, di mana N adalah banyaknya bilangan bulat. Baris berikutnya berisi
N bilangan bulat yang dipisahkan spasi.

Format Output

Cetak bilangan bulat dalam array yang dalam urut genap, dipisahkan oleh spasi dalam satu
baris.

Constraint

1 < N < 1000

For example:

Test:   Input:  Result:
tc01    4       7 2
        8 7 1 2
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < N; i += 2)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
