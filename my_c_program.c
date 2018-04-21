#include <stdio.h>
#include <limits.h>
#include <math.h>

void De_Double(double a, int *integer, double *fraction){
  if(floor(a)> LONG_MAX)
    printf("out of bounce\n");
    else{
      *integer = floor(a);
      *fraction = a - floor(a);

    }
}

void Seperate_Double(void){
  printf("please input a double type number\n");
  double a;
  scanf("%lf",&a);

  int integer;
  double fraction;
  De_Double(a,&integer,&fraction);

  printf("%.3lg's integer is %i and fraction is %lg\n",a,integer,fraction);

}



int Get_int(void)
{
  int i;
  printf("please input a int number\n");
  printf(">");
  while(scanf("%i",&i)!=1){
      while(getchar()!='\n')
	;
      printf("input invaild, please input again\n");
      printf(">");
    }
  return i;
}

void Select_Your_Choice(){
  printf("********\n");
  printf("please select your function\n");
  printf("1)add\n");
  printf("2)multiply\n");
  printf("3)power\n");
  printf("4)draw star\n");
  printf("5)de double\n");
  printf("q)quit\n");
}

void Add(){
  printf("please input integer a\n");
  int a,b;
  a = Get_int();
  printf("please input integer b\n");
  b = Get_int();
  printf("a+b = %i\n",a+b);
}

void Multiply(){
  printf("please input integer a\n");
  int a,b;
  scanf("%i",&a);
  printf("please input integer b\n");
  scanf("%i",&b);
  printf("a*b = %i\n",a*b);
}

void Power(){
  double a;
  unsigned int b;
  printf("please input real number\n");

  scanf("%lf",&a);
  printf("please input power b\n");
  scanf("%ui",&b);
  double answer;
  for(answer = a; b>1;b--)
    {
      answer = answer * a;
    }
  printf("a^b =%.3lf\n",answer);
} 

void Draw_Star(){
  printf("please input high of star\n");
  unsigned int hight,row,column;
  scanf("%ui",&hight);
  printf("\n");
  for(column=1;column<=hight;column++)
    {
      for(row=1;row<=hight;row++)
	{
	  if((column==row)||(column+row==hight+1))
	    printf("*");
	  else
	    printf(" ");
	}
      printf("\n");
    }
}

  

int main(){

  printf("hello, this program is used to select functions\n");
  while(1) {
    Select_Your_Choice();
    char choice = '1';

    choice = getchar();
    
    //scanf("%c",&choice);
    switch(choice){
      case '1':
	Add();
        break;
      case '2':
        Multiply();
        break;
      case '3':
        Power();
        break;
      case '4':
        Draw_Star();
        break;
      case '5':
	Seperate_Double();
	break;
      case 'q':
        return 0;
      default:
        printf("%i no this option\n",choice);
        break;
    }
  }
  return 0;
}
