// 24060 merge-sort & recursion
#include <bits/stdc++.h>
using namespace std;

void merge(int *array, int start, int mid, int end, const int K, int *c)
{
    static int count = 0;
    int sorted[500000];
    int i = start;
    int j = mid + 1;
    int k = start;
    while (i <= mid && j <= end)
    {
        if (array[i] <= array[j])
        {
            (*c)++;
            count++;
            if (count == K)
            {
                cout << array[i] << '\n';
            }
            sorted[k] = array[i];
            i++;
        }
        else
        {
            (*c)++;
            count++;
            if (count == K)
            {
                cout << array[j] << '\n';
            }
            sorted[k] = array[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= end)
        {
            (*c)++;
            count++;
            if (count == K)
            {
                cout << array[j] << '\n';
            }
            sorted[k] = array[j];
            j++;
            k++;
        }
    }
    else if (j > end)
    {
        while (i <= mid)
        {
            (*c)++;
            count++;
            if (count == K)
            {
                cout << array[i] << '\n';
            }
            sorted[k] = array[i];
            i++;
            k++;
        }
    }
    for (int m = start; m <= end; m++)
    {
        array[m] = sorted[m];
    }
}
void merge_sort(int *data, int start, int end, const int K, int *c)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(data, start, mid, K, c);   // left sort
        merge_sort(data, mid + 1, end, K, c); // right sort
        merge(data, start, mid, end, K, c);
    }
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    int array[500000];
    for (size_t i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    int a = 0;
    int *c = &a;
    merge_sort(array, 0, N - 1, K, c);
    if (*c < K)
    {
        cout << -1;
    }
}