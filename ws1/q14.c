
#include <stdio.h>
#include<string.h>
void str_n_cat(char *dest2, char *source, int n)
{
    int l1=strlen(dest2),l2=strlen(source),i,j;
    for(i=l1,j=0;i<l1+n,j<n;i++,j++)
    {
        dest2[i]=source[j];
    }
    dest2[l1+n]='\0';
}
void str_n_cpy(char *dest1,char *source,int n)
{
    int i;
    for( i=0;i<n;i++)
    {
        dest1[i]=source[i];
    }
    dest1[i]='\0';
    //return dest;
}
int str_n_cmp(char *s1,char *s2,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        return s1[i]-s2[i];
    }
}
int main()
{
   char source[100],dest1[100],dest2[100];
   int n;
   printf("Enter destination string\n ");
   scanf("%s",dest2);
   printf("Enter source string \n ");
   scanf("%s",source);
   printf("Enter n \n");
   scanf("%d",&n);
   printf("After copying n characters from source string we get \n");
   str_n_cpy(dest1,source,n);
   printf("%s\n",dest1);
   
   str_n_cat(dest2,source,n);
   printf("After concatinating n characters from source string to destination string we get \n");
   printf("%s\n",dest2);
   char str1[100],str2[100];
   printf("Enter string 1 and string 2 to compare first %d characters \n",n);
   scanf("%s %s",str1,str2);
   printf("After comparing \n ");
   int res=str_n_cmp(str1,str2,n);
   if(res>0)
   printf("str1 is greater \n");
   else if(res<0)
   printf("str2 is greater \n ");
   else
   printf("str1 is equal to str2 upto n characters ");
   

    return 0;
}

