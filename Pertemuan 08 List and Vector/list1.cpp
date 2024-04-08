#include <iostream>
#include <list> // 1. Header
using namespace std;

int main()
{
    /*
    2. Syntax
    Untuk mendeklarasikan list pada program:
    list<type_data> nama_list
    */
    list<int> angka = {2, 4, 5, 7, 8};

    // 3. Member Function

    /*
    a. front()
    Member function ini mengembalikan nilai dari elemen pertama pada list.
    */
    cout << angka.front();
    // Output: 2

    /*
    b. back()
    Member function ini mengembalikan nilai dari elemen terakhir pada list.
    */
    cout << angka.back();
    // Output: 8

    /*
    c. begin()
    Member function ini mengembalikan iterator yang menunjuk ke elemen
    pertama pada list.
    */
    list<int>::iterator it;
    for (it = angka.begin(); it != angka.end(); it++)
        cout << *it << " ";

    /*
    d. end()
    Member function ini mengembalikan iterator yang menunjuk ke elemen
    setelah elemen terakhir pada list.
    */

    /*
    e. push_front()
    Member function ini digunakan untuk menambahkan elemen pada awal list.
    */
    angka.push_front(1);
    // Elemen List: 1 2 4 5 7 8

    /*
    f. push_back()
    Member function ini digunakan untuk menambahkan elemen pada akhir list.
    */
    angka.push_back(1);
    // Elemen List: 2 4 5 7 8 1

    /*
    g. pop_front()
    Member function ini digunakan untuk mengeluarkan elemen pada awal list.
    */
    angka.pop_front();
    // Elemen List: 4 5 7 8

    /*
    h. pop_back()
    Member function ini digunakan untuk mengeluarkan elemen pada akhir list.
    */
    angka.pop_back();
    // Elemen List: 2 4 5 7

    /*
    i. size()
    Member funtion ini mengembalikan banyak elemen dalam list.
    */
    cout << angka.size();
    // Output: 5

    /*
    j. empty()
    Member funtion ini mengembalikan nilai boolean true atau false yang
    digunakan untuk mengecek apakah sebuah list kosong atau tidak.
    */
    if (angka.empty())
        cout << "kosong";
    else
        cout << "berisi";
    // Output: berisi

    /*
    k. assign()
    Member function ini digunakan untuk mengganti elemen-elemen di dalam list
    dengan elemen-elemen baru yang diberikan dan menyesuaikan ukuran list.
    */
    angka.assign(3, 0);
    // Elemen List: 0 0 0

    /*
    l. inset()
    Member function ini digunakan untuk menambahkan  elemen baru pada
    posisi yang ditentukan.
    */
    list<int>::iterator it = angka.begin();
    it++;
    angka.insert(it, 0);

    it++;
    it++;
    int arr[] = {11, 12, 13};
    angka.insert(it, begin(arr), end(arr));
    // Elemen List: 2 0 4 5 11 12 13 7 8

    /*
    m. advance()
    Member function ini digunakan untuk memajukan iterator ke posisi yang
    ditentukan.
    */
    list<int>::iterator it = angka.begin();
    advance(it, 2);
    cout << *it;
    // Output: 5

    /*
    n. erase()
    Member function ini digunakan untuk menghapus elemen pada posisi
    tertentu pada list.
    */
    list<int>::iterator it = angka.begin();
    it++;
    angka.erase(it);
    // Elemen List: 2 5 7 8

    /*
    o. remove()
    Member function ini digunakan untuk menghapus semua elemen pada list
    dengan nilai tertentu.
    */
    angka.remove(2);
    // Elemen List: 4 5 7 8

    /*
    p. clear()
    Member function ini digunakan untuk menghapus seluruh elemen pada list
    sehingga list menjadi kosong.
    */
    angka.clear();
    cout << angka.size();
    // Output: 0
}