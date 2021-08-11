/*
 * Uca_Batch 2
 * Worksheet 4
 * Stacks and queues
 * 
 * @Raghav   11/08/2021
 * ques 2- inf to postfix
 */

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#define size 30
char cStack[size]; //globally defining char stack
int top=-1; //global top

void push(char c)
{
	if(top==size-1)
		printf("Stack full !! \n");
	else{
		top++;
                cStack[top]=c;
	}
}

char pop()
{
        char x=-1;
        if(top==-1)
		printf("Stack Empty \n");
	else{
		x=cStack[top];
		top--;
	}
        return x;
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
//prec outside must be max for '(' as paranthesis are given priority
int prec_out(char c)
{
	if(c=='*'|| c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else if(c=='(')
		return 3;
}
//once '(' is pushed inside it must not interfere with other operators so prior= 0   hence prec 0
int prec_in(char c)
{
	if(c=='*'|| c=='/')
		return 4;
	else if(c=='+' || c=='-')
		return 2;
	else if(c=='(')
		return 0;
}
//check digit
int isOperand(char c)
{
	if(c>='0' && c<='9')
		return 1;
	else
		return 0;
}
char atTop()
{
	return cStack[top];
}
//func to convert
char *infix_to_postfix(char *infix)
{
	char *postfix;
	int len=strlen(infix);
	postfix=(char *)malloc((len+2)*sizeof(char));
	char ch;
	int i=0,j=0;
	while(infix[i]!='\0')
	{
		// printf("%s\n",postfix);
		 if(infix[i]!=')')
		 {
			 if(isOperand(infix[i]))
				 postfix[j++]=infix[i++];
			 else{
				 if(prec_out(infix[i]) > prec_in(atTop()) )
					 push(infix[i++]);
				 else
				 {
					 //ch=pop();
					 postfix[j++]=pop();
				 }
			 }
		 }
		 else   //as soon we encounter ')' we must pop until we get '('
		 {
			 while(atTop() != '(')
			 {
				 postfix[j++]=pop();
			 }
			 pop();
			 i++;
		 }
	} 
	//for remaining characters
	while(!isEmpty())
	{
		postfix[j++]=pop();
		printf("%s\n",postfix);
	}
        postfix[j]='\0';
        return postfix;
}
int main()
{
 
	char infix[100];
	scanf("%s",infix);
	//push(' ');
	char *pf=infix_to_postfix(infix);
	printf("%s is the postfix",pf);
        //printf("%s",infix_to_postfix(infix));
        //printf("%s",postfix);

        return 0;
}
