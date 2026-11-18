#include <stdio.h>

void printPositive(int son[], int size){
    for (int i = 0; i < size; i++){
        if (son[i] > 0){
            printf("%d  ", son[i]);
        }
    }
}
int main (){
    int nums[8] = {8, 6, -5, -8, 9, -6, 6, 5};
    int num_size = sizeof(nums) / sizeof(nums[0]);
    printPositive(nums, num_size);
    return 0;
}