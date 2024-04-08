#include <iostream>
#include <vector> // 1. Header
using namespace std;

int main()
{
    // 2. Syntax
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};

    // 3. Member Function

    /*
    a. front()
    Member function ini mengembalikan nilai dari elemen pertama pada vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.front() = 'h';
    // Elemen List: h i h a n

    /*
    b. back()
    Member function ini mengembalikan nilai dari elemen terakhir pada vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.back() = 'h';
    cout << huruf.back();
    // Output: h

    /*
    c. begin()
    Member function ini mengembalikan iterator yang menunjuk ke elemen
    pertama pada vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    for (vector<char>::iterator it = huruf.begin(); it != huruf.end(); it++)
        cout << *it << " ";

    /*
    d. end()
    Member function ini mengembalikan iterator yang menunjuk ke elemen
    setelah elemen terakhir pada vector.
    */

    /*
    e. at()
    Member function pada vector yang digunakan untuk mengakses elemen
    pada posisi tertentu di dalam vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    cout << huruf.at('o');
    // Output: a

    /*
    f. push_back()
    Member function ini digunakan untuk menambahkan elemen pada akhir
    vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.push_back('o');
    // Elemen List: j i h a n o

    /*
    g. pop_back()
    Member function ini digunakan untuk mengeluarkan elemen pada akhir
    vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.pop_back();
    // Elemen List: j i h a

    /*
    h. size()
    Member function ini mengembalikan banyak elemen dalam vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    cout << huruf.size();
    // Output: 5

    /*
    i. empty()
    Member function ini mengembalikan nilai boolean true atau false yang
    digunakan untuk mengecek apakah sebuah vector kosong atau tidak.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    cout << huruf.empty();
    // Output: 0

    /*
    j. assign()
    Member function ini digunakan untuk mengganti elemen-elemen di dalam
    vector dengan elemen-elemen baru yang diberikan dan menyesuaikan
    ukuran vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    char a[] = {'h', 'a', 'i'};
    int len = sizeof(a) / sizeof(a[0]);
    huruf.assign(a, a + len);
    // Elemen List: h a i

    /*
    k. insert()
    Member function ini digunakan untuk menambahkan elemen baru pada
    posisi yang ditentukan.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.insert(huruf.begin() + 2, 'g');
    // Elemen List: j i g h a n

    /*
    l. erase()
    Member function ini digunakan untuk menghapus elemen pada posisi
    tertentu pada vector.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.erase(huruf.begin(), huruf.begin() + 3);
    // Elemen List: a n

    /*
    m. clear()
    Member function ini digunakan untuk menghapus seluruh elemen dalam
    vector sehingga vector menjadi kosong.
    */
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.clear();
    cout << huruf.empty();
    // Output: 1
}
