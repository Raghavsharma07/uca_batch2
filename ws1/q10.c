
/*
Write an alternate version of squeeze(char*s1 , char* s2) that deletes each character in s1 that matches any character in the string s2.
Input: s1 = “abcd” s2 = “bc”
Output: “ad”
*/

#include <stdio.h>
#include<string.h>
//func to squeeze a string
char *squeeze(char *s1, char *s2)
{
    int l1=strlen(s1),l2=strlen(s2),i,j,l=0,ct=0,k=0;
    char s3[100];
    for(i=0;i<l1;i++)
    {
        ct=0;
        for(j=0;j<l2;j++)
        {
            if(s2[j]==s1[i])
            {
                for(k=i;k<l1;k++)
                {
                    s1[k]=s1[k+1];
                }
                i--;
                l1--;
            }
            
        }
        
        
    }
    return s1;
}
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    printf("%s\n",squeeze(str1,str2));

    return 0;
}

