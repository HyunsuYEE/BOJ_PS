// 1074
#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    int array1[100][100];
    int array2[100][100];
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            int a;
            cin >> a;
            array1[i][j] = a;
        }
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            int b;
            cin >> b;
            array2[i][j] = b;
        }
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            cout << array1[i][j] + array2[i][j] << ' ';
        }
        cout << '\n';
    }
}