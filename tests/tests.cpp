// Test definitions. Do NOT edit this file!

#include <tuple>

//#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "../main.hpp"
#include <string.h>

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Test1", "[Sieve]")
{
    int expected [31] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0};
    int sieve [31]  = {0};
    eratosthenes(31,sieve);
    INFO("Testing primes between 0 and 30 failed.");
    for(int i = 0; i < 31; i++){
        REQUIRE(sieve[i] == expected[i]);
    }
}

TEST_CASE("Test2", "[Sieve]")
{
    int expected [3] = {0, 0, 1};
    int sieve [3]  = {0};
    eratosthenes(3,sieve);
    INFO("Testing primes between 0 and 2 failed.");
    for(int i = 0; i < 3; i++){
        REQUIRE(sieve[i] == expected[i]);
    }
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Test3", "[StringString]")
{
    char haystack[] = "Hello World!";
    char needle[] = "or";
    char testString[] = "something";
    char *occurrence = testString;
    stringString(haystack, needle, &occurrence);
    INFO("Testing to find substring 'or' in 'Hello World!'.");
    REQUIRE(strcmp(occurrence,"orld!")==0);
}

TEST_CASE("Test4", "[StringString]")
{
    char haystack[] = "Hello World!";
    char needle[] = "Or";
    char testString[] = "something";
    char *occurrence = testString;
    stringString(haystack, needle, &occurrence);
    INFO("Testing to find substring 'Or' in 'Hello World!'.");
    REQUIRE(occurrence == NULL);
}

TEST_CASE("Test5", "[StringString]")
{
    char haystack[] = "aaabaaabaaaabcde";
    char needle[] = "aaaab";
    char testString[] = "something";
    char *occurrence = testString;
    stringString(haystack, needle, &occurrence);
    INFO("Testing to find substring 'aaaab' in 'aaabaaabaaaabcde'.");
    REQUIRE(strcmp(occurrence,"aaaabcde")==0);
}

// =====================
// tests for exercise 3
// ---------------------

TEST_CASE("Test6", "[MinMax]")
{
    size_t SIZE = 3;
    double defaultMin=-1, defaultMax=-1;
    double *min=&defaultMin, *max=&defaultMax;
    double **matrix = (double **) malloc(SIZE * sizeof(double *));
    for (int i = 0; i < SIZE; i++) {
        matrix[i] = (double *) malloc(SIZE * sizeof(double));
    }
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matrix[i][j] = i + j;
        }
    }
    minMax(matrix, SIZE, &min, &max);
    INFO("Testing if the minimum 0.0 was found correctly:");
    REQUIRE(*min == 0.0);
    INFO("Minimum was correct.");
    INFO("Testing if the maximum 4.0 was found correctly:");
    REQUIRE(*max == 4.0);
}

TEST_CASE("Test7", "[MinMax]")
{
    size_t SIZE = 1;
    double defaultMin=-1, defaultMax=-1;
    double *min=&defaultMin, *max=&defaultMax;
    double **matrix = (double **) malloc(SIZE * sizeof(double *));
    for (int i = 0; i < SIZE; i++) {
        matrix[i] = (double *) malloc(SIZE * sizeof(double));
    }
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matrix[i][j] = i + j;
        }
    }
    minMax(matrix, SIZE, &min, &max);
    INFO("Testing if the minimum 0.0 was found correctly:");
    REQUIRE(*min == 0.0);
    INFO("Minimum was correct.");
    INFO("Testing if the maximum 0.0 was found correctly:");
    REQUIRE(*max == 0.0);
}

TEST_CASE("Test8", "[MinMax]")
{
    size_t SIZE = 5;
    double defaultMin=-1, defaultMax=-1;
    double *min=&defaultMin, *max=&defaultMax;
    double **matrix = (double **) malloc(SIZE * sizeof(double *));
    for (int i = 0; i < SIZE; i++) {
        matrix[i] = (double *) malloc(SIZE * sizeof(double));
    }
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matrix[i][j] = i + j;
        }
    }
    matrix[0][0] = 100.0;
    matrix[2][2] = -3.0;
    minMax(matrix, SIZE, &min, &max);
    INFO("Testing if the minimum -3.0 was found correctly:");
    REQUIRE(*min == -3.0);
    INFO("Minimum was correct.");
    INFO("Testing if the maximum 100.0 was found correctly:");
    REQUIRE(*max == 100.0);
}
