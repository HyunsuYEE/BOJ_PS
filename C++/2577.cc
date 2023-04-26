#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, result;
    cin >> a;
    cin >> b;
    cin >> c;
    result = a * b * c;
    string s = to_string(result);
    int array[10];
    for (size_t i = 0; i < 10; i++)
    {
        array[i] = 0;
    }
    for (auto c : s)
    {
        for (size_t i = 0; i < 10; i++)
        {
            if (c - '0' == i)
            {
                array[i] += 1;
            }
        }
    }
    for (auto num : array)
    {
        cout << num << "\n";
    }
}