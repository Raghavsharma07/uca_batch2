/*
 * C program to find square root of a given number upto given precision
 * Date: 20 / 07/ 2021
 * @Raghav Sharma
 */
#include<stdio.h>
/*
 * Declaring a func that accepts number(float) and precision of its square rooy
 * */
float square_root_bin(float number,int precision);

int main() {
    float number;
    int precision;
   //taking inputs (number and precision)
    scanf("%f",&number);
     printf("Number: %f\n",number);
    
    scanf("%d",&precision);
    printf("Precision: %d\n",precision);
    //calling the function which returns the square root(float)
    float square_root=square_root_bin(number,precision);
    printf("%g is the square root  \n",square_root);
    printf("%f is the square root  \n",square_root);
    printf("%.*lf is the square root  ",precision,square_root);
}
//defining the function which returns square root of the number
float square_root_bin(float number, int precision)
{
    int low=0,high=number,mid;
    float ans=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid*mid==number)
        {
            ans=mid;
            break;
        }
        else if(mid*mid <number)
        {
        low=mid+1;
        //ans=mid;
        }
        else
        {
        high=mid-1;
        //ans=mid;
        }
    }
    
    float prec=0.1;
    //printf("%d %f\n",mid,ans);
    for(int i=0;i<precision;i++)
    {
        ans=ans+prec;
        while(ans*ans <= number)
        {
            ans=ans+prec;
            //printf("%f\n",ans);
            
        }
        
        ans=ans-prec;
        prec=prec/10;
    }
    return ans;
    
    
    
}
