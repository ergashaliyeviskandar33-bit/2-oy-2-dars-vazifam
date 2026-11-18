#include <stdio.h>

int countZero(int son[], int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (son[i] == 0){
            count++;
        }
    }
    return count;
}

int main (){

    int nums[7] = {0, 5, 7, 0, 10, 0, 4};
    int num_size = sizeof(nums) / sizeof(nums[0]);

    printf("No'llar soni: %d", countZero(nums, num_size));
    
    return 0;
}