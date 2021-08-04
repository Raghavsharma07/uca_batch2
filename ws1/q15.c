//Uca_Batch2
//Worksheet 100
//Q-15 reverse polish expression
//@Raghav


/**NOTE : This code works for inputs 0-9 and operators + - / * ^    */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 100 //defining max size

int Stack[size];

int height=-1; //declared globally because used by many func
int flag=1; //to prevent repeated calls for push and pulls

void push(int n)
{
	if(height==size-1)
	{
		printf("You can't push more arguments ");
                flag=0;  //so this does not keeps executing
	}
        else
	{
		height++;
		Stack[height]=n;
        }
}


int pop()
{
	int c=-1;
        if(height==-1)
        {
		printf("OOPS ! STACK EMPTY ");
		flag=0;
        }
        else
	{
		c=Stack[height];
	        height--;
	}
        return c;
}

int main()
{
	char str[100];
	scanf("%[^\n]",str);
        printf("%s \n",str);
        int i,val;
    //printf("%d ",atoi(str));
        for(i=0;str[i]!='\0';i=i+2)  //because we have to ignore spaces
        {
		if(flag==0)
			break;
		if(str[i]>='0'&&str[i]<='9')
                {
			//printf("%d\n",str[i]-'0');
			////converting to digits 
                        push(str[i]-'0');
                }
                else if(str[i]=='+')
                {
			val=pop();
                        push(pop()+val);
                }
                else if(str[i]=='-')
		{
                        val=pop();
                        push(pop()-val);
                }
		else if(str[i]=='*')
                {
			val=pop();
                        push(pop()*val);
		}
                else if(str[i]=='/')
                {
                       val=pop();
                       push(pop()/val);
		}
                else if(str[i] == '^')
                {
                      val=pop();
                      push(pow(pop(), val));
                }
        // else if(str[i]==' ')
        // {
        //     i++;
        // }
        
    }

        printf("%d ",pop()); //final element will be the ans
        return 0;
}

//Write the program expr, which evaluates a reverse Polish expression from the command line,
// where each operator or operand is a separate argument. For example, expr 2 3 4 + * evaluates 2 * (3 + 4)
