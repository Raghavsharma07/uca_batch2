//ques - 12 (rightmost index of s2)
//Ua_b2
//Worksheet 1
//@Raghav
//
#include <stdio.h>

int strrindex(char *s1, char *s2)
{

        int j,i,l1=0,l2=0,ct=0,index=-1;
        while(s1[l1]!='\0')
	{
		l1++;
        }
        while(s2[l2]!='\0')
        {
	        l2++;
        }
        for(i=0;i<l1;i++)
        {
		ct=0;
                for(j=0;j<l2;j++)
                {
			if(s1[i+j]==s2[j])
				ct++;
		}
		if(ct==l2)
                index=i;
       }
       return index;
    
}
int main()
{

        char str1[100],str2[100];
        scanf("%s %s",str1,str2);
        int index=strrindex(str1,str2);
        printf("%d\n",index);

        return 0;
}

