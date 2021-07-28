#include <stdio.h>
//Ques no. 3 - vowels and consonants
#include<string.h>
int main()
{
	//32–47 / 58–64 / 91–96 / 123–126
    char str[100];
    scanf("%[^\n]",str);
    int i,vowels=0,cons=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(( str[i]>=65 && str[i]<=91) || ( str[i]>=97 && str[i]<=122) || (str[i]>=32 && str[i]<=47) || (str[i]>=58 && str[i]<=64 ) || (str[i]>=91 && str[i]<=96) || (str[i]>=123&&str[i]<=126)) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vowels++;
        else
        cons++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n",vowels,cons);

    return 0;
}
