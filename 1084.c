#include <stdio.h>
#include <stdlib.h>
int main(void){

  //Defining variables for table
  int  rows;
  int  cols;
  int  steps;

  //this is the changing number of inputs that will be stored
  int entrys=1;

  //checks id the algorithm has initalised before it starts to loop through timesteps
  int inital = 0;
  //where inputs will be stored
  int *arrivalTimeAndPosition = (int *)malloc(entrys*2*sizeof(int));

  //takes in parameters for the grid size and amount of timesteps
  scanf("%d %d %d", &rows, &cols, &steps);

  //creates grid
  char grid[rows][cols];

  //defines variables to navagate the grid
  int row;
  int col;

  //makes all entrys in the grid "."
  for(row = 0; row < rows; row++){
    for(col = 0; col < cols; col++){
      grid[row][col]='.';
    }
  }

  //variable used to navigate through memory
  int x = 0;

  for (int i = 0; i <= steps; i++) {
    //start of a time step

    //if there are "1"'s move them 1 colum to the right
    for(row = rows-1; 0 <= row; row--){
      for (col = cols-1; 0 <= col; col--) {
        if (grid[row][col]=='1'){
          if (col+1<cols){
            grid[row][col+1]='1';
          }
          grid[row][col]='.';
        }
      }
    }
    //initalises the loop for the timesteps
    if (inital == 0){
        scanf("%d %d", &(*(arrivalTimeAndPosition+x*2+0)),&(*(arrivalTimeAndPosition+x*2+1)));
        inital=1;
    }

    //while the inputs timestep is smaller than the current timestep
    while (*(arrivalTimeAndPosition+x*2)<=i){

      //if the inputs timestep is equal to the current timestep
      if (*(arrivalTimeAndPosition+x*2)==i) {
        //change the row specified's first element to a "1"
        grid[*(arrivalTimeAndPosition+x*2+1)][0]='1';
      }
      //increase allocated memory
      entrys++;
      arrivalTimeAndPosition = (int *)realloc(arrivalTimeAndPosition, entrys*2*sizeof(int));

      //take next input
      x++;
      scanf("%d %d", &(*(arrivalTimeAndPosition+x*2+0)),&(*(arrivalTimeAndPosition+x*2+1)));

      //if the inputs timestep is equal to the current timestep
      if (*(arrivalTimeAndPosition+x*2)==i) {
        //change the row specified's first element to a "1"
        grid[*(arrivalTimeAndPosition+x*2+1)][0]='1';
      }
    }

      //if specified timestep is reached exit loop
      if (i == steps-1) {
        break;
      }
  }

  //print the final postions in the grid
  for(row = 0; row < rows; row++){
      for(col = 0; col < cols; col++){
        printf("%c",grid[row][col]);
      }
      printf("\n");
    }
  //free allocated memory
  free(arrivalTimeAndPosition);
}
