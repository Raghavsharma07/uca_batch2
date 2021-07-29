
#include <stdio.h>
/*Worksheet 1
@Raghav
//ques 8- reverse a string
//*/
//
void rev(char *str)
{
    int h=0,high;
    while(str[h]!='\0')
    {
	    h++;
    }
    //high gives length now
    high=h-1;
    int low=0;
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
