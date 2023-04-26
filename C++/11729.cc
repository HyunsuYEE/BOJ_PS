// 11729
#include <bits/stdc++.h>
using namespace std;

void moveTo(int first, int middle, int last, int n, int *count, vector<string> *(str_list))
{
    if (n == 1)
    {
        (*str_list).push_back(to_string(first));
        (*str_list).push_back(" ");
        (*str_list).push_back(to_string(last));
        (*str_list).push_back("\n");
        (*count)++;
        return;
    }

    moveTo(first, last, middle, n - 1, count, str_list);
    (*str_list).push_back(to_string(first));
    (*str_list).push_back(" ");
    (*str_list).push_back(to_string(last));
    (*str_list).push_back("\n");
    (*count)++;
    // 재귀 시작: 경유지에 있는 n-1개의 하노이 타워를, first를 거쳐서 last로 가게끔 한다.
    moveTo(middle, first, last, n - 1, count, (str_list));
}

void hanoi(int n)
{
    int count = 0;
    int *ptr = &count;
    vector<string> list;
    moveTo(1, 2, 3, n, ptr, &list);
    cout << *ptr << "\n";
    for (size_t i = 0; i < 4 * (*ptr); i++)
    {
        cout << list[i];
    }
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    hanoi(n);
}