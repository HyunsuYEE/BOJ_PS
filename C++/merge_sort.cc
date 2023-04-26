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