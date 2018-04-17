#include <stdio.h>

int main()
{
  char letter = 0;

  printf("hello, this program is used to translate lower case into upper case\n");
  
  printf("please input a charcter\n");
  
  scanf("%c",&letter);
  if ((letter>='a')&&(letter<='z'))
  
  printf("the answer is %c\n",letter-'a'+'A');
  else
    printf("the input invalid\n");
  return 0;
}
