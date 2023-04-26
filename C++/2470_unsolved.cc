#include <bits/stdc++.h>
using namespace std;
void merge(int *array, int start, int mid, int end)
{
    int sorted[1000];
    int i = start;
    int j = mid + 1;
    int k = start;
    while (i <= mid && j <= end)
    {
        if (array[i] <= array[j])
        {
            sorted[k] = array[i];
            i++;
        }
        else
        {
            sorted[k] = array[j];
            j++;
        }
        k++;
    }

    if (i <= mid)
    {
        while (i <= mid)
        {
            sorted[k] = array[i];
            i++;
            k++;
        }
    }
    else
    {
        while (j <= end)
        {
            sorted[k] = array[j];
            j++;
            k++;
        }
    }
    for (int m = start; m <= end; m++)
    {
        array[m] = sorted[m];
    }
}
void merge_sort(int *data, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(data, start, mid);   // left sort
        merge_sort(data, mid + 1, end); // right sort
        merge(data, start, mid, end);
    }
}
int find_min(int *array, int length)
{
    int array_mins[100000];
    int indexs_mins[200000];
    int pair[2];
    int tmp = 1000000000;
    for (size_t i = 0; i < length; i++)
    {
        int length_cpy = length - i;
        while (length_cpy != 0)
        {
            length_cpy /= 2;
            if (array[i] + array[length_cpy] > 0)
            {
            }
            else
            {
            }
        }
    }
}
int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int array[100001];
    for (size_t i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    merge_sort(array, 0, N - 1);
    find_min(array, N);
}