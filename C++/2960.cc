// 1929
#include <bits/stdc++.h>
using namespace std;
int Eratosthenes(int *array, int N, int K)
{
    int count = 0;
    for (int i = 2; i <= N; i++)
    {
        if (array[i] == 1)
        {
            continue;
        }

        for (int j = i; j <= N; j += i)
        {
            if (array[j] == 1)
            {
                continue;
            }
            array[j] = 1; // erase
            count++;
            // counting
            if (count == K) //
                return j;
        }
    }
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    int array[1000001] = {
        -1,
    };
    cout << Eratosthenes(array, N, K) << '\n';
}