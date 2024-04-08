// Mencari Nilai terbesar dan terkecil dari matriks dua dimensi

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{15, 23, 5}, {20, 22, 1}, {43, 19, 8}};
    int min, max;

    min = max = matrix[0][0];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    cout << "Nilai terbesar dalam matriks: " << max << endl;
    cout << "Nilai terkecil dalam matriks: " << min << endl;

    return 0;
}

// Mencari Transpose Matriks 2x2

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int m, n;
//     cin >> m >> n;

//     vector<vector<int>> M(m, vector<int>(n));
//     vector<vector<int>> T(n, vector<int>(m));

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> M[i][j];
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             T[j][i] = M[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << T[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
