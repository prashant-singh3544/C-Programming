#include <stdio.h>

int main(){ 
    /*
     // Which of the following is invalid in C?
     int a = 1;
     int b = a;
     int v = 3 * 3;
     // char dt = '21 dec 2020'; // Wrong!
     */

     // Problem 2:
    /* float a = 3.0/8 - 2;
    printf("The value of a is %f", a);
*/

// Problem 3:write a c prog to check whether a number is divisible by 97 or not

 // int a = 2342354;
//  int a = 295;
//  printf("The value of a%97 is %d", a%97);


// Prob;em 4: Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

int x=2, y=3, z=3, k=1;
float e = 3*x/y - z+k;
// 3*x/y - z+k;
// 6/y - z+k;
// 2-z+k;
// -1+k 
// -1 + 1 
// 0
printf("The value of e is %f", e);


    return 0;
}