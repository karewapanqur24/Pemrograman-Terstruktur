#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(50);

    vector<int>::iterator it = v.begin(); // penggunaan iterator

    cout << "Angka pertama dalam vektor: " << *it << endl;
    return 0;
}
