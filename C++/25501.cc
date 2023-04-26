// 25501 - recursion & Palindrome
#include <bits/stdc++.h>
using namespace std;
int recursion(const char *s, int l, int r, int *count)
{
    (*count)++;

    if (l >= r)
    {

        return 1;
    }
    else if (s[l] != s[r])
    {

        return 0;
    }
    else
    {

        return recursion(s, l + 1, r - 1, count);
    }
}

int isPalindrome(const char *s, int *count)
{

    return recursion(s, 0, strlen(s) - 1, count);
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        char s[1001];
        cin >> s;
        int k = 0;
        int *count = &k;

        cout << isPalindrome(s, count) << ' ' << *count;
        cout << '\n';
    }

    return 0;
}