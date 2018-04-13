#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y);


int main()
{
         int answer = 0;
         printf("3 times 5 is %d", multiply(3,5));
	 return 0;

	 
}


unsigned int multiply(unsigned int x, unsigned int y)
{
  if (x==1)
    {
      /* Terminating case */
      return y;
    }
  else if (x>1)
    {
      /* Recursive step */
      return y + multiply(x-1,y);
    }

  /* catch senario when x is zero */
  return 0;

}
	   
