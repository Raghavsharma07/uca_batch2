/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
//ques 6 check reverse
void check_rev(char *s, int l)
{
    int i,j,ct=0;
    for(i=0,j=l-1;i<l,j>=0;i++,j--)
    {
        if(s[i]==s[j])
        ct++;
    }
    if(ct==l)
    printf("true\n");
    else
    printf("false\n");
}
void uniform(char *s1)
{
   // printf("%s\n",s1);
    int j=0,i,l1=strlen(s1),l2,ct=0,l=0;
    //printf("%d\n",l1);
    //l keeps track of required alphabets
    char st[100];
    for(i=0;s1[i]!='\0';)
    {
        if(s1[i]>=97 && s1[i]<=122)
        {
        st[j++]=s1[i];
        i++;
        l++;
        }
        else if(s1[i]>=65 && s1[i]<=91)
        {
        st[j++]=s1[i]+32;
        i++;
        l++;
        }
        else
        i++;
        
    }
    //printf("%s\n",st);
    check_rev(st,l);//checking reverse equal or not
}
int main()
{
    char str1[100],str2[100];
   scanf("%[^\n]",str1);
   //func call to make capital letters small
   uniform(str1);
  

    return 0;
}
