#include <stdio.h>

int countLess(int son[], int size, int a){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (son[i] < a){
            count++;
        }
    }
    return count;
}

int main (){
    int num;
    int nums[8] = {5, 6, 7, 8, 12, 45, 35, 67};
    int num_size = sizeof(nums) / sizeof(nums[0]);

    printf("Son kiriting: ");
    scanf("%d", &num);

    printf("%d dan kichik sonlar: %d", num, countLess(nums, num_size, num));
    return 0;
}