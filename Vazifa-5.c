#include <stdio.h>

int countNegative(int son[], int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (son[i] < 0){
            count++;
        }
    }
    return count;
}
int main (){
    int nums[10] = {8, -9, 7, -6, 4, -8, -2, -87, 5, -7};
    int num_size = sizeof(nums) / sizeof(nums[0]);
    printf("Manfi sonlar soni: %d", countNegative(nums, num_size));
    return 0;
}