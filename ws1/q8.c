#include <stdio.h>
#include<string.h>
//ques 8- reverse a string
void rev(char *str)
{
    int l=strlen(str);
    int low=0,high=l-1;
    char c;
    while(low<=high)
    {
        c=str[low];
        str[low]=str[high];
        str[high]=c;
        low++;
        high--;
    }
    
}
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    rev(str);
    printf("%s",str);

    return 0;
}
