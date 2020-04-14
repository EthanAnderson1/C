# C
Learning how to use C

Problem 1013 
The problem is to create a program that will classify numbers into groups depending on size and tally how many fit into each group. 
The solution I used is to firstly create variables to represent the number of numbers in a group, take the input of the numbers then use a if … else if… else to find what group the number would belong to then increment the variable representing that group by one. 
Finally the variables representing how many numbers were in each group is printed. 
 
Problem 1014 
The problem is to find the circumference and area of all circles with a whole number radius between two inputted values and to sum them all together and output the sum of all areas and the sum of all circumferences. 
The solution i used to solve this included 3 functions for the main program to use, sum (takes array of ints and its length and returns the sum calculating it using a while loop), 
calculateAllAreas (takes two radius and calculates the areas of all circles with a radius between the two inputs using a while loop, puts them into an array and returns the sum of this array) 
and calculateAllcircumferences (takes two radius and calculates the circumference of all circles with a radius between the two inputs using a while loop, puts them into an array and returns the sum of this array). 
The main program takes the input and makes sure that the larger number is always inputted first ny switching them if this is not the case. 
It then prints the outputs of calculateAllAreas and calculateAllcircumferences to three decimal places. 
 
Problem 1015 
Conversion of int to ascii This program as long as there are ints to read will read the input and print out the ascii version of it. 
 
Problem 1025 
The problem was to find the lowest common multiple and th highest common factor of two numbers. 
The solucion i used was a function called hcf that used the modulus operation to check if a number was a common factor, if it was a factor the value would be save to a variable and then the next number would be tested up until the number is as big as the lowest input. 
The largest common factor is then left in the variable and is returned. 
The lowest common multiple is found using the product of the two inputs divided by their highest common factor. 
These results are then returned. 
 
Problem 1030 
The problem is to create a program that can divide two numbers then take the nth number after there decimal place. 
I have done this by firstly taking 3 inputs, the two numbers that will be divided and the number that decides which number were looking for after the decimal place. 
The numbers are divided then passed into the findNthNumberAfterDecimal function along with the third input. 
This function this number times the number by 10 to the power of the third input rounded down then moded by 10 as this uses mathematical functions to reduce the number to only the nth digit after the decimal point. 

Problem 1081 
The problem is to create a simulation of the game of life. 
The game of life is meant to simulate an ecosystem where entities will die or become alive according to their surroundings. 
The solution I used was to first take the inputs of the dimensions of the grid to represent the environment, then the amount of timesteps the program will run for. 
Then I defined two variables to navigate through the grid (which will be stored in a two-dimensional array). 
The grid is then initialised making it the same as the rest of the input. 
I then started the main loop of the program. I created a loop to go through each element of the grid, first calculating the number of adjacent alive elements then making the decision of if it should be dead or alive in the next timestep. #
The decision is stored in a buffer grid named temp which is then applied to the main grid at the end of the timestep. 
Finally, once the specified timestep is reached the program prints out the current state of the grid. 
 
Problem 1084 
The problem is to create a simulation of cars traveling on a motorway, so each time step they appear to move across the screen. The solution I used was to first take the inputs of the dimensions of the grid to represent the environment then the amount of timesteps the program will run for. Then I defined two variables to navigate through the grid (which will be stored in a two-dimensional array). I then allocate enough memory to store 2 integers for the first line of the input to decide where the cars will be generated. The grid is then initialised with each element of the 2d array having the value ‘.’. I now start the loop to go through each timestep. At the start of each time step I have a ’nested for loop’ that will go through the grid and move any ‘1’s one space to the right to simulate them moving. There is a small section of code to initialise the loop that increases the amount of memory allocated and reads a line of the input into it, this is done by storing the first line of the input in the memory so the loop can reference it when deciding what to do with future inputs. The loop that stores the inputs firstly checks if the last inputted value references a timestep equal to or less than the current one, if so then it will read inputs until it catches back up. This loop will also deal with changing the grid and add cars in the positions the inputs points too. Finally, once the specified timestep is reached the loop will break the current grid will be printed and the memory will be freed. 
