// 2745
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void change_num(string s, int base)
{
    int length = s.length();
    int sum = 0;
    for (size_t i = 0; i < length; i++)
    {
        int num;
        if (s[i] >= 48 && s[i] <= 57)
        {
            num = s[i] - '0';
            sum += num * pow(base, length - i - 1);
        }
        else
        {
            num = s[i] - 'A';
            num += 10;
            sum += num * pow(base, length - i - 1);
        }
    }
    cout << sum << '\n';
}

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int base;
    cin >> s >> base;
    change_num(s, base);
}