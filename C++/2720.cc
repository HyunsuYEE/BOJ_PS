// 2720
#include <bits/stdc++.h>
using namespace std;
void money_calculator(int *array, size_t money)
{

    while (money >= 0.25)
    {
        money -= 0.25;
        array[0]++;
    }
    while (money >= 0.10)
    {
        money -= 0.10;
        array[1]++;
    }
    while (money >= 0.05)
    {
        money -= 0.05;
        array[2]++;
    }
    while (money >= 0.01)
    {
        money -= 0.01;
        array[3]++;
    }
    return;
}

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    size_t N;
    cin >> N;
    cin.ignore();
    for (size_t i = 0; i < N; i++)
    {
        int money;
        cin >> money;
        int array[4] = {
            0,
        };
        money_calculator(array, money);
        for (size_t j = 0; j < 4; j++)
        {
            cout << array[j] << ' ';
        }
        cout << '\n';
        cin.ignore();
    }
}