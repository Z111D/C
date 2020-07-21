/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret = (int *)malloc(2*sizeof(int));
    int temp;
    for(int i = 0; i < numsSize - 1; i++)
    {
        temp = target - nums[i];
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[j] == temp)
            {
                *ret = i;
                *(ret + 1) = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    return 0;
}
