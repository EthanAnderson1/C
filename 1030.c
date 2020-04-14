#include <stdio.h>
#include <math.h>
int findNthNumberAfterDecimal(double x, int n){
  /*uses a mathematical method to find the Nth number after the decimal place*/
  x = x*pow(10,n);
  int y = (int) floor(x);
  y = y%10;
  return y;
}
int main(void) {

  /*Definition of variables*/
  int a;
  int b;
  int n;

  /*takes input*/
  scanf("%d %d %d",&a, &b, &n);

  /*divides first input by second input*/
  double x = (double) a/b;

  /*finds the Nth number after the decimal place and print it*/
  printf("%d\n", findNthNumberAfterDecimal(x,n));
  return 0;
}
