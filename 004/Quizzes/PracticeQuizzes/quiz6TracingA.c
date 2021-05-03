#include <stdio.h>
int f1(int x, int y) {
 if (x > y)
 return x;
 else
 return y;
}
int f2(int x, int y, int z) {
 return f1(x, f1(y, z));
}
int f3(int a, int b, int c) {
 if (a == b)
 return f1(b, c);
 else
 return f2(a, b, c);
}
int main(void) {
 int a=4, b=2, c=3;
 printf("A=%d\n", f1(2*a, b));
 printf("B=%d\n", f1(a, 2*b));
 printf("C=%d\n", f2(a+1, b+1, c+1));
 printf("D=%d\n", f3(b, a, c*c));
 printf("E=%d\n", f3(2*b, a, 2*c));
 return 0;
}