//Uca_Batch 
//Group 2
//Ws 7 Sorting algorithms and puzzles
//@Raghav_Sharma 
//11/08/2021
//q1 (inversion count)


#include <stdio.h>

int inversion_Count(int *a, int n)
{

        int i,j,ct=0; //keeping count of inversions
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
		{
			if(a[i]<a[j] && i>j)//checking no. of inversions for each each element and adding
			{
				ct++; 
			}
		}
        }
        return ct;
}

int main()
{
	int n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Total inversions are %d",inversion_Count(a,n));

        return 0;
}


