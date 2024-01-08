#include<stdio.h>
void double_it(int *number){
   *number = 2 * (*number);
}
void set_zero(int *number){
   *number = 0;
}
void cubeByReference(int *number);
void swap (int p, int q);
void swapByReference(int *p, int *q);
int main(void){
   int k=3;
   double_it(&k);
   printf("%d\n",k);
   cubeByReference(&k);
   printf("%d\n",k);
   set_zero(&k);
   printf("%d\n",k);
   int p=1 , q=2;
   printf("p=%d, q=%d\n",p,q);
   swap(p,q);
   printf("p=%d, q=%d \n",p,q);
   swapByReference(&p,&q);
   printf("p=%d, q=%d \n",p,q);
   return 0;
}
void cubeByReference(int *number){
   *number = *number * *number * *number;
}
void swap(int p, int q){
   int tmp;
   tmp = p;
   p = q;
   q = tmp;
}
void swapByReference(int *p, int *q){
   int tmp;
   tmp = *p;
   *p = *q;
   *q = tmp;
}