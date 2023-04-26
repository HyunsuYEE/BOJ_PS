// 1931 - greedy algorithm
#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<pair<int, int> > v;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        pair<int, int> p(a, b);
        v.push_back(p);
    }

    sort(v.begin(), v.end(), compare);

    int global_max = 0;

    int local_max = 1;
    int tmp = v[0].second;

    for (size_t i = 1; i < N; i++)
    {
        if (tmp <= v[i].first)
        {
            tmp = v[i].second;
            local_max++;
        }
    }
    cout << local_max << '\n';
}