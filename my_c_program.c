#include <stdio.h>

int main()
{

  printf("hello, this program is used to test how positive or negative the integer numbers are\n");

  int integer = 0;
  
  scanf("%i",&integer);

  if(integer > 999){
    printf("%i is highly positive\n",integer);
  }
  else if((integer<=999)&&(integer>100))
    printf("%i is very positive\n",integer);
  else if((integer>0)&&(integer<=100))
    printf("%i is positive\n",integer);
  else if(integer==0)
    printf("integer is 0\n");
  else if((integer>=-100)&&(integer<0))
    printf("%i is negative\n",integer);
  else if((integer<-100)&&(integer>=-999))
    printf("%i is very negative\n",integer);
  else
    printf("%i is highly negative\n",integer);
  
  return 0;
}
