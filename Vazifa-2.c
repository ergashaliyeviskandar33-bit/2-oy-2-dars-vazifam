#include <stdio.h>

int sumEven(int son[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if (son[i] % 2 == 0){
        sum += son[i];
        }    
    }
    return sum;
}
int main (){
    int nums[7] = {5, 6, 7, 8, 9, 10, 15};

    int num_size = sizeof(nums) / sizeof(nums[0]);
    printf("%d", sumEven(nums, num_size));
    return 0;
}