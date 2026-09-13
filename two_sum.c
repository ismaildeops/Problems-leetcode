#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i;
    int j;
    i = 0;
    int *tab;
    tab = malloc(sizeof(int) * 2);
    int count;
    while(i < numsSize)
    {
        j = i + 1;
        count = 0;
        while(j < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                tab[0] = i;
                tab[1] = j;
            }
            j++;
        }
        i++;
    }
    return tab;
}

int main()
{
    int *tab;
    int nums[] = {2,2,7,15};
    int returnSize = 2;
    tab = twoSum(nums, 4, 9, &returnSize);
    int i = 0;
    while(i < returnSize)
    {
        printf("%d", tab[i]);
        i++;
    }
}

/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/