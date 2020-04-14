/*
* Student ID: 201316928
* Student Name: Ethan Anderson
* Email: E.Anderson3@student.liverpool.ac.uk
*
* User: sgeande2
*
* Problem ID: 1081
* RunID: 39698
* Result: Accepted
*/
#include <stdio.h>

int main(void){

//Defining variables for table
  int  rows;
  int  cols;
  int  steps;

  //takes in parameters for the grid size and amount of timesteps
  scanf("%d %d %d", &rows, &cols, &steps);
  /*
  printf("Number of rows: %d\n", rows);
  printf("Number of columbs: %d\n", cols);
  printf("Number of steps: %d\n", steps);*/
  //creates grid and a "buffer" grid
  char grid[rows][cols];
  char temp[rows][cols];

//defines variables to navagate the grid
  int row;
  int col;

//initalises the grid using the input
  for(row = 0; row < rows; row++){
    for(col = 0; col < cols; col++){
      while (grid[row][col]!='.'&&grid[row][col]!='X') {
        scanf("%c", &grid[row][col]);
      }
    }
  }
  /*
  for(row = 0; row < rows; row++){
    for(col = 0; col < cols; col++){
      printf("%c",grid[row][col]);
    }
    printf("\n");
  }*/
  int i;
  for(i = 0; i < steps; i++){
    //start of a time step

    //for every postion in the grid
    for(row = 0; row < rows; row++){
      for(col = 0; col < cols; col++){
      //find the number of neighbours are alive and store it in the neighbourCount varibale
        int neighbourCount = 0;
        if (row+1<rows) {
          if (grid[row+1][col]=='X') {
            neighbourCount++;
          }
        }
        if (col+1<cols) {
          if (grid[row][col+1]=='X') {
            neighbourCount++;
          }
        }
        if (row>0) {
          if (grid[row-1][col]=='X') {
            neighbourCount++;
          }
        }
        if (col>0) {
          if (grid[row][col-1]=='X') {
            neighbourCount++;
          }
        }
        if (row+1<rows&&col+1<cols) {
          if (grid[row+1][col+1]=='X') {
            neighbourCount++;
          }
        }
        if (row+1<rows&&col>0) {
          if (grid[row+1][col-1]=='X') {
            neighbourCount++;
          }
        }
        if (row>0&&col+1<cols) {
          if (grid[row-1][col+1]=='X') {
            neighbourCount++;
          }
        }
        if (row>0&&col>0) {
          if (grid[row-1][col-1]=='X') {
            neighbourCount++;
          }
        }
      /*  printf("%d\n", neighbourCount);*/
        //checks if it should die if its currently alive
        if(grid[row][col] == 'X'){
          if(neighbourCount < 2 || neighbourCount > 3){
            temp[row][col] = '.';
          }
          else{
            temp[row][col] = 'X';
          }
        }
          //checks if it should be alive if its currently dead
        else if(grid[row][col] == '.'){
          if(neighbourCount == 3){
            temp[row][col] = 'X';
          }else{
            temp[row][col] = '.';
          }
        }
      }
    }

    //updates the grid at the end of the timestep
    for(row = 0; row < rows; row++){
      for(col = 0; col < cols; col++){
        grid[row][col] = temp[row][col];
      }
    }
  }
  //print the grid after specified amount of timesteps
  for(row = 0; row < rows; row++){
    for(col = 0; col < cols; col++){
      printf("%c",grid[row][col]);
    }
    if (row+1<rows){
    	printf("\n");
    }
  }
}
