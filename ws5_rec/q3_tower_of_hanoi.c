/*
 * Assignment 5
 * Ques 3
 * Recursion
 * Tower_of_Hanoi
 @Raghav
 */
#include <stdio.h>

int movements=0;
void tower_of_Hanoi(int n, char from , char to , char aux )
{
	if(n>0)
	{
		tower_of_Hanoi(n-1 , from, aux , to);
		printf(" %c to %c \n",from ,to );
		movements++;
		tower_of_Hanoi(n-1, aux , to , from);
	}
	else
	{
		return;
	}
}
int main()
{
	int n;
	printf("Enter number of rings for the tower : ");
	//let the three towers be A, B, C
	
	scanf("%d",&n);
	tower_of_Hanoi(n, 'A', 'B' , 'C');
	printf("%d movements required ",movements);
	return 0;
}
