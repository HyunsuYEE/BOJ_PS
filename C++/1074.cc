// 1074
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int Z(int N, int r, int c)
{
    if (N == 0)
    {
        return 0;
    }
    int half = 1 << (N - 1);  // half length of square == 2 ^ (n-1)
    if (r < half && c < half) // Area 1
        return Z(N - 1, r, c);
    if (r < half && c >= half) // Area 2
        return half * half + Z(N - 1, r, c - half);
    if (r >= half && c < half) // Area 3
        return 2 * half * half + Z(N - 1, r - half, c);
    if (r >= half && c >= half) // Area 4
        return 3 * half * half + Z(N - 1, r - half, c - half);
}

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, r, c;
    cin >> N >> r >> c;
    cout << Z(N, r, c) << '\n';
}