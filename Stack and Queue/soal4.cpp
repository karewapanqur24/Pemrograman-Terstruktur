/*
Soal Nomor 4
Anda akan diberikan sebuah bilangat bulat N, kemudian N baris berikutnya yang berisi perintah
untuk stack interpreter. Program stack interpreter dibuat untuk mensimulasikan data struktur
stack. Data struktur stack merupakan data struktur yang bersifat LIFO (Last In First Out). Stack
interpreter ini dapat mensimulasikan penambahan data dan penghapusan data yang ada pada
stack.

Format Input

Baris pertama berisi sebuah bilangan bulat N. N baris berikutnya masing-masing berisi sebuah perintah. Sesuai deskripsi di atas, terdapat 2 kemungkinan perintah yaitu:

-push, memasukkan elemen ke stack
-pop, mengeluarkan sebuah elemen dari stack

Perintah push akan diikuti sebuah elemen berupa bilangan bulat antara 1 sampai 1.000.000. Dan
perintah pop tidak akan dilakukan saat stack tidak memiliki elemen.

Format Output

N baris yang setiap barisnya berisi seluruh elemen yang terdapat dalam stack dipisahkan
dengan spasi setelah perintah yang dimasukkan di jalankan.

Constraint

1 < N < 1000

For example:

Test:   Input:  Result:
tc01    2       0
        push 0

tc02    10      55
        push 55 2 55
        push 2  1 2 55
        push 1  0 1 2 55
        push 0  1 2 55
        pop     2 55
        pop     55
        pop
        pop
        pop
        pop
*/
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int JumlahPerintah;
    cin >> JumlahPerintah;
    stack<int> tumpukan;
    vector<string> hasil;

    for (int i = 0; i < JumlahPerintah; i++)
    {
        string Perintah;
        cin >> Perintah;

        if (Perintah == "push")
        {
            int Angka;
            cin >> Angka;
            tumpukan.push(Angka);
        }
        else if (Perintah == "pop" && !tumpukan.empty())
        {
            tumpukan.pop();
        }

        if (!tumpukan.empty())
        {
            stack<int> temp = tumpukan;
            vector<int> reversed;
            while (!temp.empty())
            {
                reversed.push_back(temp.top());
                temp.pop();
            }
            string baris = "";
            for (int j = reversed.size() - 1; j >= 0; j--)
            {
                baris += to_string(reversed[j]) + " ";
            }
            hasil.push_back(baris);
        }
        else if (i == 0)
        {
            hasil.push_back("0");
        }
    }

    for (auto &baris : hasil)
    {
        cout << baris << endl;
    }

    return 0;
}

// #include <iostream>
// #include <stack>
// #include <string>
// #include <vector>
// using namespace std;

// int main()
// {
//     int JumlahPerintah;
//     cin >> JumlahPerintah;
//     stack<int> tumpukan;
//     vector<string> hasil;

//     for (int i = 0; i < JumlahPerintah; i++)
//     {
//         string Perintah;
//         cin >> Perintah;

//         if (Perintah == "push")
//         {
//             int Angka;
//             cin >> Angka;
//             tumpukan.push(Angka);
//         }
//         else if (Perintah == "pop" && !tumpukan.empty())
//         {
//             tumpukan.pop();
//         }

//         if (!tumpukan.empty())
//         {
//             stack<int> temp = tumpukan;
//             vector<int> reversed;
//             while (!temp.empty())
//             {
//                 reversed.push_back(temp.top());
//                 temp.pop();
//             }
//             string baris = "";
//             for (int j = 0; j < reversed.size(); j++)
//             {
//                 baris += to_string(reversed[j]) + " ";
//             }
//             hasil.push_back(baris);
//         }
//         else if (i == 0)
//         {
//             hasil.push_back("0");
//         }
//     }

//     for (auto &baris : hasil)
//     {
//         if (baris != "0 ")
//         {
//             cout << baris << endl;
//         }
//     }

//     return 0;
// }
