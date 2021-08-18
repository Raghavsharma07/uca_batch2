/*Uca_Batch 2
Worksheet - 8
Algorithm
q2- mth smalles
19/08/2021
@Raghav 
*/

#include <stdio.h>
#include <math.h>
#include<stdlib.h>

void display(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
        printf("\n");
}
 

int swap(int *a,int i,int j)
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}


void quicksort(int *a, int l,int h) // Though quick sort would sort in time O(nlogn) but we are using it as it will be less than n^2 and no extra space
{
	//int piv=a[l];
        int p=l,f=l;
        int i=l+1;
        if(l>=h)
		return ;
	for(i=l+1;i<=h;i++)
	{
		if(a[i]<a[p])
		{
			f++;
			swap(a,f,i);
		}
        }
        swap(a,p,f);
        quicksort(a,l,f-1);
        quicksort(a,f+1,h);
}

int main()
{
	int n,m,i;
	printf("Enter size of array\n");
        scanf("%d",&n);
        printf("Enter m to find mth smallest number\n");
        scanf("%d",&m);
        int a[n];
	int k;
        for(i=0;i<n;i++)
        {
		k=rand();
		a[i]=k%20000 + 1;
	}
        display(a,n);
        quicksort(a,0,n-1);
        display(a,n);
        printf("%d is the %dth smallest number ",a[m-1],m);
    
    

        return 0;
}

