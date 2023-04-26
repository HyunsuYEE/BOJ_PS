// 1015 - sort & mapping
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
    int array[51];
    int arraycpy[51];

    int masking[1001] = {
        0,
    }; // for bitmasking
    for (size_t i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for (size_t i = 0; i < N; i++)
    {
        arraycpy[i] = array[i];
    }
    int P[51] = {
        -1,
    };
    merge_sort(arraycpy, 0, N - 1);
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            if (arraycpy[j] == array[i])
            {
                P[i] = j + masking[array[i]];
                masking[array[i]]++;
                break;
            }
        }
    }
    for (size_t i = 0; i < N; i++)
    {
        cout << P[i] << ' ';
    }

    cout << '\n';
}