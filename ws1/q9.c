//ques - 9
#include <stdio.h>
#include<string.h>
#include<math.h>
/*
int power(int n,int p)
{
    int k=1;
    for(int i=0;i<p;i++)
    {
        k=k*n;
    }
    return k;
}*/
int htoi(char *str)
{
    int i,j,l=strlen(str),digit=0,sum=0,p=0;
    for(i=l-1;i>=0;i--)
    {
        digit=0;
        if(str[i]>=48 && str[i]<=57)
        {
        digit=str[i]-'0';
       // printf("%d ",digit);
        }
        if(str[i]=='a'|| str[i]=='A')
        {
            digit=10;
        }
        if(str[i]=='b'|| str[i]=='B')
        {
            digit=11;
        }
        if(str[i]=='c'|| str[i]=='C')
        {
            digit=12;
        }
        if(str[i]=='d'|| str[i]=='D')
        {
            digit=13;
        }
        if(str[i]=='e'||str[i]=='E')
        {
            digit=14;
        }
        if(str[i]=='f'|| str[i]=='F')
        {
            digit=15;
        }
        sum=sum+digit*pow(16,p);
        p++;
        
        //printf("%d ",digit);
    }
    return sum;
    
}

int main()
{
    char str[100];
    scanf("%s",str);
    int ans=htoi(str);
    printf("%d ",ans);

    return 0;
}

