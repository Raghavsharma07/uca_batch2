
#include <stdio.h>
//Uca_Batch2
//Worksheet 1
//q5 multiplying matrices
////@Raghav

int main()
{

        int n;
        printf("Enter size \n");
        scanf("%d",&n);
        int i,j,k,s=0;
        int a[n][n];
        int b[n][n];
        int c[n][n];
        //scanning 2darray 1
        printf("Enter elements for array 1\n");
        for(i=0;i<n;i++)
	{
		for(j=0; j<n ; j++ )
		{
			scanf("%d",&a[i][j]);
		}
	}
    
        //scanning 2darray 2
        printf("Enter elements for array 2\n");
        for(i=0;i<n;i++)
	{
		for(j=0 ; j< n ; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

        //mutliplying both matrices
        for(i=0;i<n;i++)
	{
		for(j=0; j<n ; j++)
		{
			for(k=0; k<n ; k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			c[i][j]=s;
			s=0;
		}
	}
			

        //displaying final array
        for(i=0;i<n;i++)
	{
		for( j=0; j<n ;j++ )
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

        return 0;
}
