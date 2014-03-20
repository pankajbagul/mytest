void swap_str (char* data[], int i, int j)
{       char* temp = (char*) malloc(255);
        strcpy(temp, data[i]);
        strcpy(data[i], data[j]);
        strcpy(data[j], temp);
        free(temp);
}
void sort_string (char* strings[], int n)
{       int i,j;
        for (i = 0; i < n-1; i++)
                for (j = i + 1; j > 0; j--)
                        if ( strcmp(strings[j-1], strings[j]) > 0)
                                swap_str(strings, j-1, j);
}

