#include <stdio.h>
extern int lab2(int i, int j, int a, int b);
extern int And_op(int c, int d);
extern int Or_op(int d, int e);
extern int Xor_op(int f, int g);
int main()
{
int i = 0;
int j = 2;
int a = 150;
int b = 250;
int c = 150;
int d = 250;
int e = 150;
int f = 250;
int g = 150;
int h = 250;
printf("Let the variables be a=%d, b=%d, i=%d, j=%d ", a, b, i, j);
printf("And of %d and %d is %d\n", c, d, And_op(c,d));
printf("Or of %d and %d is %d\n", e, f, Or_op(e,f));
printf("Xor of %d and %d is %d\n", g, h, Xor_op(g,h));
printf("X= :%d \n",lab2(i,j,a,b));
return (0);
}
