
/*
 * Assignment 5
 * Recursion
 * Ques-5 Puzzle
 *
 * @Raghav
 * */



#include <stdio.h>

int prisoner_number=0;

//the function finds the poisoned bottle and returns the prisoner no. who would taste it
int find_poisoned_bottle(int *a,int low, int high,int poisoned_bottle)
{
	prisoner_number++;
        int mid=(high+low)/2;

        if (a[mid] == poisoned_bottle )
		return prisoner_number;
	else if( a[mid] > poisoned_bottle)
		return find_poisoned_bottle(a , low , mid-1 , poisoned_bottle );
	else
		return find_poisoned_bottle(a , mid+1, high , poisoned_bottle );
}

//main function
int main()
{
	int poisoned_bottle;
	printf("Enter the poison bottle no. ");
        
	scanf("%d",&poisoned_bottle);
	printf("%d ",poisoned_bottle);

        int i,j,k,a[1000]; //a[1000] is the array of all the bottles
        for( i=1 ; i<=1000 ; i++)
	{
		a[i]=i;
	}

	int n=find_poisoned_bottle(a,1,1000,poisoned_bottle);

        printf("To find the poisoned bottle - bottle no. %d , we had to send %d prisoners to taste the bottle ",poisoned_bottle,n);
	return 0;
}

