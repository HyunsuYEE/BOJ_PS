// 2903
#include <bits/stdc++.h>
using namespace std;
int square(int n)
{
    int i = 1;
    int a = 2;
    while (n--)
    {
        a += i;
        i *= 2;
    }
    return a * a;
}

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cout << square(N) << '\n';
}