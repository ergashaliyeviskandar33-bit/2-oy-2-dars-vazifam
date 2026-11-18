#include <stdio.h>

void printArray(int son[], int size){

    for(int i = 0; i < size; i++){
        printf("%d\n", son[i]);
    }
}
int main (){
    int nums[5] = {10, 20, 30, 40, 50};

    int num_size = sizeof(nums) / sizeof(nums[0]);
    printArray(nums, num_size);
    
    return 0;
}