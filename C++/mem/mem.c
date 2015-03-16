#include <string.h>
#include <stdio.h>



int a=1;
const int b=1;
const int c=1;

int main()
{

  const char *c_str="string";
  //char *str=c_str;
  //error
  char *str="string";
  //warning
  char a_str[]="string";

  printf("c_str addr is %p\r\n",c_str);
  printf("raw_string addr is %p\r\n","string");
  //str[0]='p';
  //segment  fault
  //char * p_str=new char[100];
  //memset(p_str,0,100);
  //memcpy(p_str,"string",strlen("string"));
  //printf("a_str addr is %p\r\n",a_str);
  //printf("p_str addr is %p\r\n",p_str);

  //delete [] p_str;
  //printf("p_str addr is %p\r\n",p_str);

  printf("a addr is %p\r\n",&a);
  printf("b addr is %p\r\n",&b);
  printf("c addr is %p\r\n",&c);


  return 0;
}
