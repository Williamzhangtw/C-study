#include <stdio.h>
//this program to use to calculate the "Length of a circle"
// "Length of a circle = 2 * PI * radius
#define PI 3.14159261234567890123456789
int main()
{
  float radius = 0;

  printf("hello, this program is used to calculate the \"length of the circle\"\n");
  
  printf("please input radius\n");
  scanf("%f",&radius);
  printf("the answer is %.20f\n",radius*PI*2);

  return 0;
}
