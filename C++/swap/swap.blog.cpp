如果本博文不是比较C/C++的区别，那么文中出现的C，一律指C/C++



首先，该博文的标题是个伪命题，
C中从来不存在传地址，只有传值，如若非说是传地址，也是传地址值


我们先看一个典型的“失败”函数:

定义：
void swap(int a,int b)
{
  int temp=a;
  a=b;
  b=temp;
}

调用：
swap(x,y);

验证：
cout<<"x values:"<<x<<endl;
cout<<"y values:"<<y<<endl;


失败的原因：
我们仔细看看调用swap(x,y)到底发生了什么

int main()
{
  int x=1;
  int y=2;

  swap(x,y);
}
-->
int main()
{
  int x=1;
  int y=2;


  int a=x;
  int b=y;

  int temp=a;
  a=b;
  b=temp;
}

就是这样，函数内部根本没有操作x,y，操作的是a,b


接下来再看一个典型的“成功”函数
void swap(int* a,int* b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

调用：
swap(&x,&y);

验证：
cout<<"x values:"<<x<<endl;
cout<<"y values:"<<y<<endl;

成功的原因
我们仔细看看调用swap(&x,&y)到底发生了什么
int main()
{
  int x=1;
  int y=2;

  swap(&x,&y);
}
-->
int main()
{
  int x=1;
  int y=2;


  int *a=&x;
  int *b=&y;

  int temp=*a;
  *a=*b;
  *b=*temp;
}
函数内部根本没有操作x,y，但同样的，函数内部也并没有操作a,b
函数内部操作的是a,b所指向的内存中的值，而该块内存就是x,y所占用的内存，亦即改变了x,y所表示的值

