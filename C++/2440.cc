#include <bits/stdc++.h>
using namespace std;
void star3(int N)
{
    if (N == 0)
    {
        return;
    }
    for (int i = 0; i < N; i++)
    {
        cout << "*";
    }
    cout << '\n';
    star3(N - 1);
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cin.ignore();
    star3(N);
    return 0;
}