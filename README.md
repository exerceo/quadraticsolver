# quadraticsolver
Quadratic equation solver written in C

## Building
To build the project:
```
cd src
make
```

now `qsolver` should be in the directory

## Deployment
To deploy the project for use:
```
cd src
make deploy
```

now the `qsolver` program will be in the deployment directory

## Usage
To use qsolver, run the program (i.e. `./qsolver`) and enter three decimal numbers separated by spaces. 

For example:
```
quadraticsolver/src> ./qsolver
Please type all 3 numbers on the same line. To exit the program, type 'exit'
Example:
   > 2.0 5 -3.0
   Roots are: x1: 0.500000 and x2: -3.000000

> 1 5 2.0
Roots are: x1: -0.438447 and x2: -4.561553
```

## Unit Tests
To run the unit tests to validate the qsolver program:
```
cd src
make t1 t2
./t1
./t2
```
If the programs returns 0, it was successful. If any error occurs, the program will display the error and line number.

## System Testing
The system test builds the program and then runs preset tests and checks the output.

To use the system test, run the bash script (i.e. `./test-script.sh`).

For example:
```
cd src/system_testing
src/system_testing> ./test-script.sh
******* BEGINNING TEST *******
gcc input/input.c -c -Wall -pedantic -std=c99 
gcc qsolver_math/qsolver.c -c -Wall -pedantic -std=c99
gcc qsolver_main.c input.o qsolver.o -Wall -pedantic -std=c99 -lm -o qsolver
*******************************
SUCCESS | The test cases match.
*******************************
rm -rf *.o qsolver t1 t2
********* ENDING TEST *********
