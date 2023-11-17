#include<stdio.h>

void main()
{
    char operand;
    int num1,num2,ans;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter operand '+,-,/,*': ");
    getchar();
    scanf("%c",&operand);
    switch (operand)
    {
    case '+':
        ans=num1+num2;
        printf("%d",ans);
        break;
    case '-':
        ans=num1-num2;
         printf("%d",ans);
        break;
    case '*':
        ans=num1*num2;
         printf("%d",ans);
        break;
    case '/':
        ans=num1/num2;
         printf("%d",ans);
        break;
    default:
        printf("Invalid operation");

    }

}
