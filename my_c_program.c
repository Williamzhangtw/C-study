#include <stdio.h>

int main()
{
  long double radius = 0.0L;
  long double height = 0.0L;
  const long double pi = 3.1415926353890L;
  printf("hello, this program is used to calculate cylinder volume\n");

  printf("please input long double radius\n");
  
  scanf("%Lf",&radius);
  printf("please input long double height\n");
  scanf("%Lf",&height);
  
  printf("Volume = pi*radius*radius*height = %.12Lf\n",pi*radius*radius*height);

  
  return 0;
}
