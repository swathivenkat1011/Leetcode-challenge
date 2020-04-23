#include<stdio.h>
#include<string.h>
char stack1[20];
char stack2[20];
int top1=-1;
int top2=-1;
void push(char,int);
void pop(int);
int compare();
int main()
{
    int i,res;
    char s1[20],s2[20];
    printf("Enter string 1\t");
    gets(s1);
    printf("Enter string 2\t");
    gets(s2);
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]!='#')
        {
            push(s1[i],1);
        }
        else
        {
            pop(1);
        }
    }
    for(i=0;i<strlen(s2);i++)
    {
        if(s2[i]!='#')
        {
            push(s2[i],2);
        }
        else
        {
            pop(2);
        }
    }
    res=compare();
    res==0?printf("False"):printf("True");
    return 0;
}
void push(char c,int i)
{
    if(i==1)
    {
        top1++;
        stack1[top1]=c;
    }
    if(i==2)
    {
        top2++;
        stack2[top2]=c;
    }
}
void pop(int i)
{
    if(i==1)
    {
        top1--;
    }
    if(i==2)
    {
        top2--;
    }
}
int compare()
{
    while((top1!=-1)&&(top2!=-1))
    {
       if(stack1[top1]!=stack2[top2])
        {
            return 0;
        }
        top1--;
        top2--;
    }
    if((top1==-1)&&(top2==-1))
    {
        return 1;

    }
    else{
        return 0;
    }


}
