#include <stdio.h>
#include <stdlib.h>

int* input_arr(int n) {
    
    int *array = (int*) malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        int arr_elem;
        scanf("%d", &arr_elem);
        array[i] = arr_elem;
    }
    return array;
}

int count_sum_of_arr(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    return sum;
}




int main()
{
    int n;
    printf("Введите количество элементов: \n");
    scanf("%d", &n);
    int* new_array = input_arr(n);
    count_sum_of_arr(new_array, n);
    free(new_array);
    return 0;
}
