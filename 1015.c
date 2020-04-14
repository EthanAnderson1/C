#include <stdio.h>
int main(void) {

  /*define variable*/
  int x;

  /*if there is an input, read input and print the ascii character for that value*/
  while(scanf("%d", &x) == 1){
    printf("%c",(char) x);
  }


  return 0;
}
