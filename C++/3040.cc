// 3040
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int array[9];
    for (size_t i = 0; i < 9; i++)
    {
        int a;

        cin >> a;
        array[i] = a;
    }
    int sum = 0;
    int copyArray[9];
    // 이중 for문으로 안에서 조합 두개 고르면 될듯

    for (size_t i = 0; i < 9; i++)
    {

        for (size_t j = i; j < 9; j++)
        {

            for (size_t k = 0; k < 9; k++)
            {
                copyArray[k] = array[k];
            }
            sum = 0;
            if (i == j)
            {
                continue;
            }
            copyArray[i] = 0;
            copyArray[j] = 0;

            for (size_t k = 0; k < 9; k++)
            {
                sum += copyArray[k];
            }
            if (sum == 100)
            {
                break;
            }
        }
        if (sum == 100)
        {
            break;
        }
    }

    for (size_t s = 0; s < 9; s++)
    {
        if (copyArray[s] == 0)
        {
            continue;
        }
        cout << copyArray[s] << "\n";
    }
}