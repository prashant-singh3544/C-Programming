#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee facebook [100]; // an array of structures
    // We can access the data using;
    facebook[0].code = 100;
    facebook[1].code = 77; 
    return 0;
}