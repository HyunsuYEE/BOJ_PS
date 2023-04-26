// 5397 - linked list
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    size_t i;
    cin >> i;
    list<list<char> > box;
    while (i--)
    {
        string s;
        cin >> s;
        list<char> L;
        list<char> strs;
        auto cursor = strs.begin();
        for (auto c : s)
        {
            if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
            {

                strs.insert(cursor, c);
            }
            else if (c == '<')
            {
                if (cursor != strs.begin())
                {
                    cursor--;
                }
            }
            else if (c == '>')
            {
                if (cursor != strs.end())
                {
                    cursor++;
                }
            }
            else
            {
                if (cursor != strs.begin())
                {
                    cursor--;
                    cursor = strs.erase(cursor);
                }
            }
        }
        box.push_back(strs);
    }
    for (auto str : box)
    {
        for (auto c : str)
        {
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}
