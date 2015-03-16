#include <iostream>
using namespace std;

void swap(int a,int b);
void swap(int *a,int *b);

int main()
{
  int x=1;
  int y=2;

  cout<<"init:"<<endl;
  cout<<"x values:"<<x<<endl;
  cout<<"y values:"<<y<<endl;

  swap(x,y);
  cout<<"after swap(x,y):"<<endl;
  cout<<"x values:"<<x<<endl;
  cout<<"y values:"<<y<<endl;

  swap(&x,&y);
  cout<<"after swap(&x,&y):"<<endl;
  cout<<"x values:"<<x<<endl;
  cout<<"y values:"<<y<<endl;

  int *px=&x;
  int *py=&y;
  cout<<"after swap(px,py):"<<endl;
  swap(px,py);
  cout<<"x values:"<<x<<endl;
  cout<<"y values:"<<y<<endl;

  return 0;
}


void swap(int a,int b)
{
  int temp=a;
  a=b;
  b=temp;
}

void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}


