#define CATCH_CONFIG_RUNNER
#define TEST 1 // Always change to 1 before your final submission to Github Classroom.
#include "tests/catch.hpp"
#include "main.hpp"
#include <stdlib.h>

// DO NOT CHANGE THIS METHOD
int runCatchTests(int argc, char* const argv[])
{
    return Catch::Session().run(argc, argv);
}

// =====================
// Exercise 1 - "Sieb des Eratosthenes"
// ---------------------
void eratosthenes(int n, int* sieve){
   //TODO
}

// =====================
// Exercise 2 - Needle in a Haystack
// ---------------------
void stringString(char *haystack, char *needle, char **ptr){
    //TODO
}

// =====================
// Exercise 3 - Min-Max
// ---------------------
void minMax(double **matrix, size_t size, double **min, double **max){
    //TODO
}


/*
 Test your C knowledge in the main function, but leave the very last lines of code unchanged. 
 */
int main(int argc, char* const argv[] ){
    // TODO Call your functions and experiment with C
    
    // =====================
    // Exercise 1
    // ---------------------
    // read some int n from the console
    // or simply set a variable
    // create an dynamic array with the help of malloc (also free up the memory after usage again)
    // or some static array
    // call function eratosthenes...
    // print all prime numbers up to n - 1
    

    
    
    
    
    

    // =====================
    // Exercise 2
    // ---------------------
    // A C String is defined like char needle[] = "substring";
    // Define two of them as local variables
    // Define a temporary pointer for the result
    // call stringString and pass the parameters
    // print the string pointed to by the temporary pointer variable
   
    
    
    
    
    
    
    
    // =====================
    // Exercise 3
    // ---------------------
    // Define a matrix using malloc
    // Look into the test case how this is done
    // Define two local pointer variables
    // Call minMax
    // Print the values referred to by the two pointers
    
    
    
    
    
    
    
    
    
    
    // DO NOT CHANGE CODE AFTER THIS LINE
    // This is where automatic testing starts, when the define macro constant is set to 1.
    // For local development you can set the constant to 0 until you finished your implementation.
    // Don't just program against the test cases. Also "play" with your source code and experiment with C.
    if (TEST){
        return runCatchTests(argc, argv);
    }
    return 0;
}






