// 11047
#include <bits/stdc++.h>
using namespace std;
int counting_coins(const int *array, int N, int K)
{
    int count = 0;

    while (N > 0)
    {
        N--;
        if (array[N] > K)
        {

            continue;
        }
        else
        {
            while (array[N] <= K)
            {

                K -= array[N];
                count++;
            }
        }
    }
    return count;
}

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    cin.ignore();
    int array[10];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    cout << counting_coins(array, N, K) << '\n';
}