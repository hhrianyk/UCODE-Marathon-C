void mx_printchar(char);
void mx_printint(int);

void mx_print_arr_int(const int *arr, int size) {
    for (int index = 0; index < size; index++) {
        mx_printint(arr[index]);
        mx_printchar('\n');
    }
}
