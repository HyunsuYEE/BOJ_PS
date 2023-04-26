// 2630 - recursion
#include <bits/stdc++.h>
using namespace std;
void cut_paper(int array[2], const int paper[128][128], int x, int y, const int N)
{

    if (N == 1)
    {
        if (paper[x][y])
        {

            array[1]++;
        }
        else
        {

            array[0]++;
        }
        return;
    }
    bool one_color = true;
    int temp = paper[x][y];
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            if (temp != paper[x + i][y + j])
            {
                one_color = false;
            }
        }
    }
    if (one_color)
    {
        if (temp)
        {
            cout << "blue" << '\n';
            array[1]++;
        }
        else
        {
            cout << "white" << '\n';
            array[0]++;
        }
        return;
    }
    cut_paper(array, paper, x, y, N / 2);
    cut_paper(array, paper, x, y + N / 2, N / 2);
    cut_paper(array, paper, x + N / 2, y, N / 2);
    cut_paper(array, paper, x + N / 2, y + N / 2, N / 2);
    return;
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int array[2] = {0, 0};
    int N;
    cin >> N;
    int paper[128][128] = {
        {},
    };
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> paper[i][j];
        }
        cin.ignore();
    }

    cut_paper(array, paper, 0, 0, N);
    cout << array[0] << '\n'
         << array[1] << '\n';
    return 0;
}