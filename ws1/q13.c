#include <stdio.h>
//Worksheet 1
//@Raghav 
//ques 13- s2 at end

int strend(char *s1, char *s2)
{

        int j,i,l1=0,l2=0,ct=0;
        while(s1[l1]!='\0')
        {
		l1++;
        }
        while(s2[l2]!='\0')
        {
		l2++;
        }
	for(i=l1-l2,j=0;i<l1,j<l2;i++,j++)
        {
		if(s1[i]==s2[j])
                ct++;
        }
        if(ct==l2)
		return 1;
        else
		return 0;
    
}


int main()
{

        char str1[100],str2[100];
        scanf("%s %s",str1,str2);
        int at_end=strend(str1,str2);
        printf("%d\n",at_end);

        return 0;
}
