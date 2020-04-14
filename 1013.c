/*
* Student ID: 201316928
* Student Name: Ethan Anderson
* Email: E.Anderson3@student.liverpool.ac.uk
*
* User: sgeande2
*
* Problem ID: 1013
* RunID: 29642
* Result: Accepted
*/
#include <stdio.h>

int main(void) {

  /*defines variables*/
  int highScores=0;
  int midScores=0;
  int lowScores=0;
  int x;

  /*if there is an input, read input*/
  while(scanf("%d", &x) == 1){
    /*increment variables depending on value of input*/
    if (x>=85){
      highScores++;
    }else if (x<85 && x>=60) {
      midScores++;
    } else if (x<60&&x>0) {
      lowScores++;
    }
    /*break the loop if 0 or invalid entry is recieved*/
    else {
      break;
    }
  }

  /*print the results*/
  printf(">=85:%d\n60-84:%d\n<60:%d\n", highScores, midScores, lowScores);

  return 0;
}
