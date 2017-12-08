# System Testing

The system test builds the program and then runs preset tests and checks the output.

## Usage
To use the system test, run the bash script (i.e. `./test-script.sh`).

For example:
```
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

```