#include <stdio.h>

int countGreater(int son[], int size, int m){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (son[i] > m){
            count++;
        }
    }
    return count;
}

int main (){
    int n;
    int nums[8] = {8, 10, 35, 5, 76, 60, 11, 23};
    int num_size = sizeof(nums) / sizeof(nums[0]);

    printf("Son kiriting: ");
    scanf("%d", &n);

    printf("%d sonidan katta sonlar soni: %d", n, countGreater(nums, num_size, n));
    return 0;
}