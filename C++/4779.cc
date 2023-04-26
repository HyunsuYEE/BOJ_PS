// 4779
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void Cantor(int N)
{
    if (N == 0)
    {
        cout << "-";

        return;
    }
    Cantor(N - 1);
    for (size_t i = 0; i < pow(3, N - 1); i++)
    {
        cout << " ";
    }
    Cantor(N - 1);
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        int N;
        cin >> N;
        if (cin.fail())
        {
            break;
        }
        cin.ignore(1000, '\n');
        Cantor(N);
        cout << '\n';
    }
    return 0;
}