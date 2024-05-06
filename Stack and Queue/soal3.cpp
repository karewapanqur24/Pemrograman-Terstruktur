/*
Soal Nomor 3
Anda akan diberikan sebuah bilangat bulat N, kemudian N baris berikutnya yang berisi perintah 
untuk queue interpreter. Program queue interpreter dibuat untuk mensimulasikan data struktur 
queue. Data struktur queue merupakan data struktur yang bersifat FIFO (First In First Out). 
Queue interpreter ini dapat mensimulasikan penambahan data dan penghapusan data yang ada 
pada queue.

Format Input

Baris pertama berisi sebuah bilangan bulat N. N baris berikutnya masing-masing berisi sebuah 
perintah. Sesuai deskripsi di atas, terdapat 2 kemungkinan perintah yaitu:

-push, memasukkan elemen ke queue
-pop, mengeluarkan sebuah elemen dari queue

Perintah push akan diikuti sebuah elemen berupa bilangan bulat antara 1 sampai 1.000.000. 
Dan perintah pop tidak akan dilakukan saat queue tidak memiliki elemen.

Format Output

N baris yang setiap barisnya berisi seluruh elemen yang terdapat dalam queue dipisahkan 
dengan spasi setelah perintah yang dimasukkan di jalankan.

Constraint

1 < N < 1000

For example:

Test:   Input:  Result:
tc01    2       0
        push 0

tc02    10      55
        push 55 55 2
        push 2  55 2 1
        push 1  55 2 1 0
        push 0  2 1 0
        pop     1 0
        pop     0
        pop
        pop
        pop
        pop
*/
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int sumCommand;
    cin >> sumCommand;
    queue<int> antrian;
    vector<queue<int>> queues;

    for (int i = 0; i < sumCommand; i++)
    {
        string Command;
        cin >> Command;

        if (Command == "push")
        {
            int Angka;
            cin >> Angka;
            antrian.push(Angka);
        }
        else if (Command == "pop" && !antrian.empty())
        {
            antrian.pop();
        }

        queues.push_back(antrian);
    }

    for (auto &antrian : queues)
    {
        if (!antrian.empty())
        {
            while (!antrian.empty())
            {
                cout << antrian.front() << " ";
                antrian.pop();
            }
        }
        else
        {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}
