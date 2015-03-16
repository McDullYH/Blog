#include <stdio.h>

//what is the const var inside?

int main()
{

  const int a=1;

  printf("a's address is %p\r\n",&a);

  printf("input a's address\r\n");

  int *p= (int*)&a;

  //here let p point to a;
  //scanf("%p",&p);

  printf("p point to  %p\r\n",p);

  *p=100;


  // I suppose a will be 100, but acturlly a is still 1...
  printf("a's value is %d\r\n",a);
  printf("*p's value is %d\r\n",*p);

  return 0;
}

//how it goes?
