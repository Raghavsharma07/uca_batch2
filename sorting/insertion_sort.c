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
       a[i]=n-i;//for random
       //a[i]=i;//for ascending
       //a[i]=n-i;//for desc
    }

    struct timeval e;
    gettimeofday(&e,NULL);
    long starttime=e.tv_sec*1000+e.tv_usec/1000;
    //INSERTION SORT
    int j,temp,ct=0,min_index,key;
    for(i=1;i<n;i++)
    {
            key=a[i];
            j=i-1;
            while(j>=0&& a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key;
    }


    gettimeofday(&e,NULL);
    long endtime=e.tv_sec*1000+e.tv_usec/1000;
    
    printf("%ld\n",endtime-starttime);



    return 0;
}
