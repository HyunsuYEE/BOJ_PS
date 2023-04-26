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

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int array[1000];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    merge_sort(array, 0, N - 1);
    int total_sum = 0;
    int part_sum = 0;
    for (int i = 0; i < N; i++)
    {
        part_sum += array[i];
        total_sum += part_sum;
    }
    cout << total_sum << '\n';
}