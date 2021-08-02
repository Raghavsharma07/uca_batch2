/*
 * Assignment 5
 * Recursion
 * Ques - 4
 * Fibonacci Series- nth term
 * @Raghav
 * */

//CONSIDERING FIBONACCI SERIES GOES LIKE 1,1,2,3,5,8........

#include <stdio.h>

//fib_term function
int fib_term(int n)
{
	if(n==1 || n==2)
		return 1;
	else
		return fib_term(n-1) + fib_term(n-2);
}


int main()
{
	int n;
	printf("Enter n for which nth terms will be printed : ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=(n*n + 1);i++) //because upto n*n + 1 n terms would be covered
	{
		if(i%n == 0)
			printf("%d ",fib_term(i));
	}
	return 0;
}
