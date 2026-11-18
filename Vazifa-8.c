#include <stdio.h>

void multiplyArray(int son[], int size){
    for (int i = 0; i < size; i++){
        son[i] = son[i] * 2;   
    }

    for (int i = 0; i < size; i++){
        printf("%d ", son[i]);
    }
    printf("\n");
}

int main (){
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num_size = sizeof(nums) / sizeof(nums[0]);

    multiplyArray(nums, num_size);
    return 0;
}