#include<stdio.h>
#include<string.h>
int stack[100];
int top=-1;
int starcount;
int closepar;
int openpar;
void push(char);
void pop();
void pop()
{
    top--;
}
int main()
{
    int i,j,t;
    char str[100];
    printf("enter the string\t");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='(')
        {
            push(str[i]);
            openpar++;
        }
        else if(str[i]=='*')
        {
            starcount++;
        }
        else
        {
            closepar++;
            if(stack[top]=='(')
                {
                    pop();
                    openpar--;
                    closepar--;
                }
        }
    }
    if((openpar==0)&&(closepar==0))
    {
        printf("True");
    }
    else if((openpar!=0)&&(openpar==starcount))
    {
        printf("True");
    }
    else if((closepar!=0)&&(closepar==starcount))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
void push(char c)
{
    top++;
    stack[top]=c;
}
