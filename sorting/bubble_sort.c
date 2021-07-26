#include <stdio.h>
#include<stdlib.h>
#include <sys/time.h>
int main()
{
    int n;
    printf("Enter size:\n");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
       a[i]=rand();//for random
       //a[i]=i;//for ascending
       //a[i]=n-i;//for desc
    }

    struct timeval e;
    gettimeofday(&e,NULL);
    long starttime=e.tv_sec*1000+e.tv_usec/1000;
    //BUBBLE SORT
    int j,temp,ct=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
                if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               ct++;
            }
        }
        if(ct==0)
                break;
    }

    gettimeofday(&e,NULL);
    long endtime=e.tv_sec*1000+e.tv_usec/1000;
    printf("%ld\n",endtime-starttime);



    return 0;
}

