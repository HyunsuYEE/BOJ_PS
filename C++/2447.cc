// 2447 - recursion & star10
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void star(int N, char array[2187][2187], int x, int y)
{

    if (N == 3)
    {
        for (size_t a = 0; a < 3; a++)
        {
            for (size_t b = 0; b < 3; b++)
            {
                if (a == 1 && b == 1)
                {
                    array[x + a][y + b] = ' ';
                    continue;
                }

                array[x + a][y + b] = '*';
            }
        }

        return;
    }
    // below i, j are relative index of square.
    for (size_t m = 0; m < 3; m++)
    {
        for (size_t n = 0; n < 3; n++)
        {

            if (m == 1 && n == 1)
            {

                for (size_t k = 0; k < N / 3; k++)
                {
                    for (size_t l = 0; l < N / 3; l++)
                    {
                        array[x + N / 3 + k][y + N / 3 + l] = ' ';
                    }
                }
                continue;
            }

            star(N / 3, array, x + m * (N / 3), y + n * (N / 3));
        }
    }
}

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    char array[2187][2187] = {
        {},
    };
    star(N, array, 0, 0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << array[i][j];
        }
        cout << '\n';
    }
}