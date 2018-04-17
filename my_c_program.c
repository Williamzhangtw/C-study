#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;

  printf("hello, this program is used to test bitwise\n");

  printf("please input int number a\n");
  
  scanf("%i",&a);
  printf("please input int number b\n");
  scanf("%i",&b);
  
  printf("a & b = %x\n",a&b);

  printf("a | b = %x\n",a|b);

  printf("a ^ b = %x\n",a^b);

  printf("********\n");
  printf("this is for right/left bit shif\n");
  printf("please input two numbers, seperate by space\n");

  scanf("%i %i",&a,&b);
  printf("a << b = %x\n",a<<b);
  printf("a >> b = %x\n",a>>b);
  
  return 0;
}
