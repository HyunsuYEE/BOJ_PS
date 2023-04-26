// 1929
#include <bits/stdc++.h>
using namespace std;
void Eratosthenes(int *array, int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (array[i] == 1)
        {
            continue;
        }
        array[i] = 0;
        for (int j = 2 * i; j <= N; j += i)
        {
            array[j] = 1;
        }
    }
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int M, N;
    cin >> M >> N;
    int array[1000001] = {
        -1,
    };
    Eratosthenes(array, N);
    for (size_t i = M; i <= N; i++)
    {
        if (i == 1)
        {
            continue;
        }
        if (array[i] == 0)
            cout << i << '\n';
    }
}