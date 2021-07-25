#include <stdio.h>
//Ques no. 3 - vowels and consonants
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int i,vowels=0,cons=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(( str[i]>=65 && str[i]<=91) || ( str[i]>=97 && str[i]<=122)){
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vowels++;
        else
        cons++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n",vowels,cons);

    return 0;
}
