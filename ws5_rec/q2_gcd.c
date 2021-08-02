/*
 * Assignment_5
 * Recursion
 * Ques 2- GCD 
 * @Raghav
 
 */

#include<stdio.h>
//gcd function's recursive implemenation

int gcd(int n1, int n2)
{
	if(n1%n2==0)
		return n2;
	else
		return gcd(n2,n1%n2);
    
}
int main()

{

        int n1,n2;
        printf("Enter 2 numbers : ");

        scanf("%d %d",&n1,&n2);

        int hcf=gcd(n1,n2);

        printf("%d is hcf of %d and %d ",hcf,n1,n2);

        return 0;
}
