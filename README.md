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
