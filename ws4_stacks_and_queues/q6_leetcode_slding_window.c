/*
 * LEETCODE PROBLEM
 *
 * @Raghav
 * UCA BATCH - 2
 *
 * SLIDING WINDOW QUES
 *
 * Code:
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().

 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
    int i,max,j;
    int size=0;
  int x,maxim;
    size=numsSize-k+1;

    int *b;
    b=(int *)malloc(sizeof(int)*size);
    for(i=0 , j=0;  j<size; i++, j++)
    {
        x=i;
        maxim=nums[x];
            for(x=i;x<i+k;x++)
            {
                if(maxim<nums[x])
                    maxim=nums[x];
            }
        b[j]=maxim;

    }
    *returnSize=size;
    return b;

}
