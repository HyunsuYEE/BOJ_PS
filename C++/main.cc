#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    long long bridge[100000];
    long long oil_tax[100000];
    for (int i = 0; i < N - 1; i++)
    {
        cin >> bridge[i];
    }
    for (int j = 0; j < N; j++)
    {
        cin >> oil_tax[j];
    }
    long long total_pay = 0;
    total_pay += bridge[0] * oil_tax[0];
    int base_index = 0;
    for (int i = 1; i < N - 1; i++)
    {

        if (bridge[i] * oil_tax[i] < bridge[i] * oil_tax[base_index])
        {
            base_index = i;
            total_pay += bridge[i] * oil_tax[i];
        }
        else
        {
            total_pay += bridge[i] * oil_tax[base_index];
        }
    }
    cout << total_pay << '\n';
}