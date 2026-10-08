#include<stdio.h>
int main()
{
    float a,b,c;
    char ch;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Sign=");
    scanf(" %c",&ch);
    printf("Enter second number:");
    scanf("%f",&b);
    switch(ch)
    {
        case '+':c=a+b;
        printf("Sum=%f",c);
        break;
        case '-':c=a-b;
        printf("Sum=%f",c);
        break;
        case '*':c=a*b;
        printf("Sum=%f",c);
        break;
        case '/':if(b==0)
        {
            
            printf("error");
        }
        else
        {
        c=a/b;
        printf("Division=%f",c);
        }
        break;
    }
return 0;
}