/*
 * Assignment_5
 Recursion
 Ques 1- Selection Sort using recursion

 @Raghav

*/

#include<stdio.h>

#include<math.h>

//Function to display our array
void display(int *a, int n)
{
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

//Func to return index of smallest element using recursion
int rec_smallest_index(int *a, int n, int j, int index)
{
    if(j==n)
    return index;
    else{
        if(a[j]<a[index])
        {
            index=j;
            
        }
        rec_smallest_index(a,n,j+1,index);
    }
}

//Selection_Sort using recursion 

void selection_sort(int *a, int i,int n)
{
    int temp,index;
    if(i==n-1)
    return;
    else
    {
        index=rec_smallest_index(a,n,i+1,i);
      //Swapping the smallest element with a[i]	
         temp=a[i];
        a[i]=a[index];
        a[index]=temp;
        selection_sort(a,i+1,n);
    }

}

//Main method
int main()
{
    int n;
    printf("Enter size :\n ");
    scanf("%d",&n);
    int a[n];
    int i,index,j,temp;
    for(i=0;i<n;i++)
    {
        a[i]=n-i;
    }
    display(a,n);
    selection_sort(a, 0, n);
   /* for(i=0;i<n-1;i++)
    {     
        index=rec(a,n,i+1,i);   
        /*for(j=i+1;j<n;j++)
        {
            if(a[j]<a[index])
            index=j;
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
        

    }*/
   display(a,n);
    return 0;
}
