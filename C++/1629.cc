// 1629
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mulAndDividend(ll A, ll B, ll C)
{
    if (B == 1)
    {
        return A % C;
    }
    ll val = mulAndDividend(A, B / 2, C);
    val = val * val % C;
    if (B % 2 == 0)
    {
        return val;
    }
    return A * val % C;
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long A, B, C;
    cin >> A >> B >> C;
    cout << mulAndDividend(A, B, C) << '\n';
}