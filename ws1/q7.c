 
#include <stdio.h>
//Uca_batch2
//Worksheet 1
//ques 7 //print lines with more than 80 char

int main()
{
    FILE *fp;
    char c;
    int n,ct,index=0;
    char line[1000];
    char fname[20];
    //getting filename
    scanf("%s",fname);
    fp=fopen(fname, "r");
    
    //c = fgetc(fp);
    while ((c=fgetc(fp)) != EOF)
    {
        if(c!='\n')//until we reach next line 
        {
            line[index]=c;
            index++;
        }
        else{
            line[index]='\0';
            if(index>=80)
            {
                printf("%s\n",line);
            }
            index=0;//assign index =0 so as to start again
        }
       
        //c = fgetc(fp);
    }
    return 0;
}
