#include <stdio.h>

int main()
{
  for (int i=0;i<0xffff;i++)
  {
    char p[]="string";
    char q[]="string";
    printf("p addr is %p\r\n",p);
    printf("q addr is %p\r\n",q);
  }

  for (int i=0;i<0xffff;i++)
  {
    char *p="string";
    char *q="string";
    printf("p addr is %p\r\n",p);
    printf("q addr is %p\r\n",q);
  }
}
