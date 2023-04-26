// 18258
#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    // First in, First out.
    int array[2000000] = {
        -1,
    };
    int first_point = 0;
    int end_point = 0;
    int length = 0;

    void push(int x)
    {
        array[end_point] = x;
        length++;
        end_point++;
        return;
    }
    void pop()
    {
        if (length == 0)
        {
            cout << -1 << '\n';
            return;
        }
        cout << array[first_point] << '\n';
        length--;
        first_point++;
    }
    int size()
    {
        return length;
    }
    void empty()
    {
        if (length == 0)
        {
            cout << 1 << '\n';
            return;
        }
        cout << 0 << '\n';
    }
    void front()
    {
        if (length == 0)
        {
            cout << -1 << '\n';
            return;
        }
        cout << array[first_point] << '\n';
        return;
    }
    void back()
    {
        if (length == 0)
        {
            cout << -1 << '\n';
            return;
        }
        cout << array[end_point - 1] << '\n';
        return;
    }
};
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    size_t N;
    cin >> N;
    cin.ignore();
    vector<string> array;
    Queue q;
    for (size_t i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if (s == "front")
        {
            q.front();
        }
        else if (s == "back")
        {
            q.back();
        }
        else if (s == "size")
        {
            cout << q.size() << '\n';
        }
        else if (s == "pop")
        {
            q.pop();
        }
        else if (s == "empty")
        {
            q.empty();
        }
        else
        {
            int a;
            cin.ignore();
            cin >> a;
            q.push(a);
        }
    }
}