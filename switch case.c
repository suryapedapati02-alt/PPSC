#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter opearator(+,-,*,/,%)");
	scanf("%c",&op);
	printf("enter two values");
	scanf("%d%d",&a,&b);
	switch(op)
{

case '+':c=a+b;
      printf("addition is :%d",c);
      break;
      case'-':c=a-b;
      printf("subtraction is :%d",c);
      break;
     case '*':c=a*b;
      printf("multiplication is :%d",c);
      break;
      case '/':c=a/b;
      printf("division is :%d",c);
      break;
      case '%':c=a%b;
      printf("modulus is :%d",c);
      break;
      defauit :printf("invalid operator");
      break;
  }
}
