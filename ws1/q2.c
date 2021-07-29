
#include <stdio.h>
/* Uca_Batch 2 Worksheet 1
 * @Raghav
//Ques 2 -( printing pattern)
*/
int main()
{
    int i,j,k;
    int n;
    //input
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}

