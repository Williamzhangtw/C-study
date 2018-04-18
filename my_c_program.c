#include <stdio.h>

void Select_Your_Choice(){
  printf("********\n");
  printf("please select your function\n");
  printf("1)add\n");
  printf("2)multiply\n");
  printf("q)quit\n");
}

void Add(){
  printf("please input integer a\n");
  int a,b;
  scanf("%i",&a);
  printf("please input integer b\n");
  scanf("%i",&b);
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

int main(){

  printf("hello, this program is used to select functions\n");
  while(1) {
  Select_Your_Choice();
  char choice = 0;

  scanf("%c",&choice);

    switch(choice){
    case '1':
      Add();
      break;
    case '2':
      Multiply();
      break;
    case 'q':
      return 0;
      break;
    default:
      printf("no this option\n");
      break;
    }

    }
  return 0;
}
