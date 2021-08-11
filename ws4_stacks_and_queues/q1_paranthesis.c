/*
 * Uca_Batch2
 * 11/08/2021
 * @Raghav
 *
 * Worksheet 4 -Stacks and queues
 * ques1
 * */

#include<stdio.h>

#define size 50

char cstack[size]; //cstack decla
int top=-1;
//push 
void push(char c)
{
	if(top==size-1)
		printf("STACK FULL \n");
	else{
		top++;
                cstack[top]=c;
	}
}
//pop
char pop()
{
	char x=-1;
	if(top==-1)
		printf("Stack Empty!!\n");
	else{
		x=cstack[top];
		top--;
	}
        return x;
}
//check empty
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int main()
{
	char str[100];
	char ch;
	int flag=1; //making it 0 for conflicting cases
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
			push(str[i]);
		else if(str[i]==')')
		{
			ch=pop();
			if(ch!='(')
			{
				flag=0;
				break;
			}
		}
		else if(str[i]==']')
		{
			ch=pop();
			if(ch!='[')
			{
				flag=0;
				break;
			}
		}
		else if(str[i]=='}')
		{
			ch=pop();
			if(ch!='{')
			{
				flag=0;
				break;
			}
		}
	}
	if(isEmpty() && flag==1) //if stack empties and no conflicting paranthesis
		printf("true\n");
	else
		printf("false\n");
	return 0;
}

