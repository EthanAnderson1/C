#include <stdio.h>

/*define pi*/
static double pi = 3.14;


double sum(double x[], int arraylength){

  /*defines variables*/
  int i = 0;
  double output = 0;

  /*calculates the sum of the array*/
  while(i<arraylength){
    output = output + x[i];
    i++;
  }
  return output;
}
double calculateAllAreas(int r1, int r2){

  /*defines variables*/
  /*makes array for each areas we need to sum together*/
  double areas[r2-r1+1];
  int counter = 0;

  /*calculates areas of cirlces depending
   on inputs and adds them to an array*/
  while (r1<=r2){
    areas[counter] = pi*r1*r1;
    counter++;
    r1++;
  }

  /*returns the sum of the array*/
  return sum(areas, counter+1);
}

double calculateAllCircumference(int r1, int r2){

  /*defines variables*/
  /*makes array for each circumferences we need to sum together*/
  double circumferences[r2-r1+1];
  int counter = 0;

  /*calculates circumferences of cirlces depending
   on inputs and adds them to an array*/
  while (r1<=r2){
    circumferences[counter] = pi*2*r1;
    counter++;
    r1++;
  }

  /*returns the sum of the array*/
  return sum(circumferences,counter);
}

int main(void) {

  /*define variables*/
  double placeholder;
  int r1;
  int r2;

  /*takes input*/
  scanf("%d %d",&r1, &r2);

  /*makes sure the largest number is r2*/
  if (r2<r1){
    placeholder = r2;
    r2=r1;
    r1=placeholder;
  }

  printf("%.3f\n",calculateAllAreas(r1, r2));
  printf("%.3f\n",calculateAllCircumference(r1, r2));
return 0;
}
