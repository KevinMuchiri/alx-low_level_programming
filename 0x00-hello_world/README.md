This project will sharpen my skills in C
0-preprocessor - runs a C file through the preprocessor and saves output in a file c. Also accomodates for the exported variable CFILE which stores the filename. Use gcc -E $CFILE -o expected-file.
1-compiler - passess the C file through the compiler and outputs the result to file main.o without passing through the linker. Use gcc -c
