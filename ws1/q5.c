
#include <stdio.h>
//q5 multiplying matrices
int main()
{
    int n;
    printf("Enter size \n");
    scanf("%d",&n);
    int i,j,k,s=0;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    printf("Enter elements for array 1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for array 2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
               s=s+a[i][k]*b[k][j]; 
               
               
            }
            c[i][j]=s;
            s=0;
            
            
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
    }

    return 0;
}
