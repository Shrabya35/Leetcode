int singleNumber(int *nums, int numsSize)
{
    int i = 0;
    while (i < numsSize - 1)
    {
        if (nums[i] == nums[i + 1])
        {
            i += 2;
        }
        else
        {
            return nums[i];
        }
    }
    return nums[i];
}