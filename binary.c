#include <stdio.h>

void binary_search(int arr[], int n, int s)
{
    int l, m, r;
    l = 0;
    r = n - 1;

    while (l <= r)
    {
        m = (l + r) / 2;
        if(arr[m] == s){
            printf("Data is found\n");
            return;
        }else if(arr[m] > s){
            r = m - 1;
        }else{
            l = m + 1;        }
    }
    printf("Not found\n");
}

int main()
{

    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 0;

    binary_search(arr, size, search);

    return 0;
}