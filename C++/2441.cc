#include <bits/stdc++.h>
using namespace std;
void star4(int N)
{
    static int k = N;
    if (N == 0)
    {
        return;
    }
    int padding = k - N;
    for (int p = 0; p < padding; p++)
    {
        cout << ' ';
    }
    for (int i = 0; i < N; i++)
    {
        cout << '*';
    }
    cout << '\n';
    star4(N - 1);
    return;
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cin.ignore();
    star4(N);
}