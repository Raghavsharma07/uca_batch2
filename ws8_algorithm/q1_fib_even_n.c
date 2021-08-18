/*Uca_Batch 2
Worksheet - 8
Algorithm
q1- n even terms of fibonacci series
19/08/2021
@Raghav 
*/

#include <stdio.h>

int fib(int n)
{

        if(n==1 || n==2)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}


int main()
{

	int n,i;
        printf("Enter n to display n even nos.\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
	{
		printf("%d ",fib(i*3)); //fib series= 1 1 2 3 5 8 .... thus we see every 3rd term is even
	}
	
	return 0;
}

