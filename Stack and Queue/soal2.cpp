/*
Soal Nomor 2
Mencetak Bilangan Bulat yang Bernilai Ganjil

Anda akan diberikan array N bilangan bulat dan Anda diminta mencetak bilangan bulat yang bernilai ganjil.

Format Input

Baris pertama input berisi N, di mana N adalah banyaknya bilangan bulat. Baris berikutnya berisi N bilangan bulat yang dipisahkan spasi.

Format Output

Cetak bilangan bulat dari array yang bernilai ganjil, dipisahkan oleh spasi dalam satu baris.

Constraint

1 < N < 1000

For example:

Test:   Input:  Result:
tc01    4       7 1
        8 7 1 2
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;
    queue<int> q;
    queue<int> oddNumbers;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        q.push(num);
    }

    while (!q.empty())
    {
        int num = q.front();
        q.pop();
        if (num % 2 != 0)
        {
            oddNumbers.push(num);
        }
    }

    while (!oddNumbers.empty())
    {
        cout << oddNumbers.front() << " ";
        oddNumbers.pop();
    }

    return 0;
}
