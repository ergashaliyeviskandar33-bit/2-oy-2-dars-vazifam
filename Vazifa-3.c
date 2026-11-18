#include <stdio.h>

int sumOdd(int son[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if (son[i] % 2 != 0){
            sum += son[i];
        }
    }
    return sum;
}
int main (){
    int nums[7] = {3, 4, 5, 6, 7, 9, 3};

    int num_size = sizeof(nums) / sizeof(nums[0]);
    printf("Toq sonlar yig'insisi: %d", sumOdd(nums, num_size));
    return 0;
}