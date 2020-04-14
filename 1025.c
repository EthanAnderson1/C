#include <stdio.h>

int hcf(int x, int y){

  /*define variables*/
  int output = 0;
  int i=0;

  /*goes through all numbers less than or equal to x*/
  for (i = 1; i <= x; i++) {
    /*if number is a common factor assign it to output*/
    if ( x%i ==0 && y%i ==0) {
      output = i;
    }
  }

  return output;
}

int lcm(int x, int y){
  /*calculates and returns the lowest common multiple*/
  return x*y/hcf(x,y);
}

int main(void) {

  /*define variables*/
  int placeholder;
  int x;
  int y;

  /*takes input*/
  scanf("%d %d", &x, &y);

  /*makes sure the largest number is y*/
  if (y<x){
    placeholder = y;
    y=x;
    x=placeholder;
  }

  printf("%d ", hcf(x, y));
  printf("%d", lcm(x, y));

  return 0;
}
