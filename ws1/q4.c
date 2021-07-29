#include <stdio.h>
/* 
 * Worksheet 1
 * @Raghav
//ques 4 reverse array
*/
//to print array
void print(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
//to reverse the array
void reverse(int *a, int n)
{
    int l=0,h=n-1,temp;
    while(l<=h)
    {
        temp=a[l];
        a[l]=a[h];
        a[h]=temp;
        l++;
        h--;
    }
}
int main()
{
    int n;
    printf("Enter size : \n");
    scanf("%d",&n);
    int i,a[n];
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    print(a,n);
    printf("After reversing \n");
    reverse(a,n);
    //reversed array
    print(a,n);
    

    return 0;
}

