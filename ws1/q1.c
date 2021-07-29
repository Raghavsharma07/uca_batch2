
#include <stdio.h>
/*Uca_batch2 Worksheet 1
 * 26/07/2021
 *@Raghav
 Ques 1-
 */

int main()
{
    int a,b;
    printf (" Enter a and b ");
    scanf ( "%d %d " ,&a,&b);
    printf ( "a = %d and b= %d\n",a,b);
    //Swapping without a third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d and b= %d ",a,b);

    return 0;
}
