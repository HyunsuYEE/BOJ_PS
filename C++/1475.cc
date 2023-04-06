// 1475
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string s = to_string(N);
    int numOfBox = 0;
    int sixOrNine = 0;
    int array[10];
    int array2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    list<int> L;
    for (size_t i = 0; i < 10; i++)
    {
        array[i] = 0;
    }

    for (auto c : s)
    {
        L.push_back((int)(c - '0'));
    }

    for (auto num : L)
    {

        if (array[num] == 1)
        {

            if (num == 6)
            {

                if (array[(num) + 3] == 1)
                {
                    for (size_t i = 0; i < 10; i++)
                    {
                        array[i] = 0;
                    }

                    array[(num)] = 1;
                    array2[num] += 1;
                }
                else
                {
                    array[num + 3] = 1;
                    array2[num + 3] += 1;
                }
            }
            else if (num == 9)
            {
                if (array[num - 3] == 1)
                {
                    for (size_t i = 0; i < 10; i++)
                    {
                        array[i] = 0;
                    }

                    array[(num)] = 1;
                    array2[num] += 1;
                }
                else
                {
                    array[num - 3] = 1;
                    array2[num - 3] += 1;
                }
            }
            else
            {
                numOfBox++;

                for (size_t i = 0; i < 10; i++)
                {
                    array[i] = 0;
                } // 새로운 박스 가져옴
                array[(num)] = 1;
                array2[num] += 1;
            }
        }
        else
        {
            array[(num)] = 1;
            array2[num] += 1;
        }
    }
    int Min = array2[0];
    for (auto i : array2)
    {
        if (Min < i)
        {
            Min = i;
        }
    }
    cout << Min;

    return 0;
}