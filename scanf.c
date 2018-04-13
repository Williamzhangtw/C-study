#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;

  printf("please input two numbers, seperate by space\n");
  scanf("%i %i",&a,&b);
  printf("the number you input is %i and %i\n",a,b);

  printf("please input two numbers, seperate by ,\n");
  scanf("%i,%i",&a,&b);
  printf("the number you input is %i and %i\n",a,b);
  
  return 0;
}
