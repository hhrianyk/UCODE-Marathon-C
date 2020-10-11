int mx_popular_int(const int *arr, int size) {
    int mci = 0;
    int mcsum = 0;
    int sum = 0;

    for (int j = 0; j < size; j++)
        mcsum = arr[0] == arr[j] ? mcsum++ : mcsum;
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < size; j++)
            sum = arr[i] == arr[j] ? sum++ : sum;

        if (sum > mcsum) {
            mci = i;
            mcsum = sum;
        }

        sum = 0;
    }

    return arr[mci];
}
