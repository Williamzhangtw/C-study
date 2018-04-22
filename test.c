#include <stdio.h>
//prototype

void Print_Array (int a[], int count);
float Average(int a[], int count);
void Copy_Array(int to[], int from[], int count);
int *Biggest(int *a, int count);
void Print_in_reverse(int *a, int count);
int len(char *str);
char myword[] = "hello world";
char word[12];
int Count_Char(char *str, char what);
void Copy_String(char *des, char *src);
int main()
{
  int a[9]={1,2,3,4,5,6,7};
  int b[9]={0};

  Print_Array(a,9);
  Print_in_reverse(a,9);
  Copy_String(word,myword);
  printf("%s\n",word);
  printf("numbers of 'l' in sentence hello world length is %i\n",Count_Char(myword,'l'));
  printf("Average of a[9] is %lf\n",Average(a,9));
  printf("biggest of a[9] is %i\n",*Biggest(a,9));
    
  return 0;
}
void Print_Array (int a[], int count)
{

  int *p = a;
  while(count--)
    {
      printf("%i\n",*p++);
    }
}

float Average(int a[], int count)
{
  int sum = 0;
  int total = count;
  float result;
  while(count--)
    {
      sum = sum + *a++;
    }

  result = sum / (float)total;
  printf("sum is %i\n",sum);
  return result;
}

void Copy_Array(int to[], int from[], int count)
{
  while(count--)
    {
      *to++ = *from++;
    }
}

int *Biggest(int *a, int count)
{
  int *max;
  max = a;
  while(--count)
    {
      if(*++a >*max)
	max = a;
    }
  return max;
}

void Print_in_reverse(int *a, int count)
{
  a = a + count-1;
  while(count--)
    {
      printf("%i\n",*a--);
    }
  
}

int len(char *str)
{
  int i = 0;
  while(*str++ != '\0')
    {
     i++;
    }
  return i;
}

int Count_Char(char *str, char what)
{
  int i = 0;
  while(*str++ != '\0')
    {
      if( *str == what)
      i++;
    }
  return i;
}
void Copy_String(char *des, char *src)
{
  while(*src != '\0')
    {
      
      *des++ = *src++;
    }
}
