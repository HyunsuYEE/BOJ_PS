// 1406
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    list<char> L;
    for (auto c : s)
    {
        L.push_back(c);
    }
    auto cursor = L.end();

    size_t M;
    cin >> M;

    string tmp;
    getline(cin, tmp);
    while (M--)
    {
        string op;
        getline(cin, op);
        if (op[0] == 'P')
        {
            L.insert(cursor, op[2]);
        }
        else if (op[0] == 'L')
        {
            if (!(cursor == L.begin()))
                cursor--;
        }
        else if (op[0] == 'D')
        {
            if (!(cursor == L.end()))
                cursor++;
        }
        else if (op[0] == 'B')
        {
            if (cursor != L.begin())
            {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    for (auto c : L)
    {
        cout << c;
    }
}