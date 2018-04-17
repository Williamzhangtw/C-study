#include <stdio.h>
#include <limits.h>
int main()
{
  int a = 0;
  int b = 0;

  printf("hello, this program is used to test arithmetic\n");
  printf("int max = %i", INT_MAX);
  printf("please input int number a\n");
  
  scanf("%i",&a);
  printf("please input int number b\n");
  scanf("%i",&b);
  
  if (b==0)
    {
      printf("b can't be 0\n");
      return 0;
    }
  
  printf("a + b = %i\n",a+b);
  printf("a - b = %i\n",a-b);
  printf("a/(float)b = %.2f\n",a/(float)b);
  printf("a%%b = %i\n",a%b);
  


  return 0;
}
