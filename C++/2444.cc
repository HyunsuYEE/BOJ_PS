// 2444
#include <bits/stdc++.h>
using namespace std;
void star7(int N)
{
    int k = N;
    for (int i = 1; i <= 2 * N - 1; i += 2)
    {
        int padding = k - (i + 1) / 2;
        for (int p = 0; p < padding; p++)
        {
            cout << ' ';
        }
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = 2 * N - 3; i >= 1; i -= 2)
    {
        int padding = k - (i + 1) / 2;
        for (int p = 0; p < padding; p++)
        {
            cout << ' ';
        }
        for (int j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return;
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cin.ignore();
    star7(N);
    return 0;
}