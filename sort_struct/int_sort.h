void swap (int data[], int i, int j)
{       int temp;
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
}
void sort (int data[], int n)
{       int i,j;
        for (i = 0; i < n-1; i++)
                for (j = i + 1; j > 0; j--)
                        if (data[j-1] > data[j])
                                swap (data, j-1, j);
}
