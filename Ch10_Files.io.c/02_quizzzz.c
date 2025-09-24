#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen ("prashant2.txt", "r");

    if (ptr == NULL){
        printf ("the file doest not exist ,, SORRY! \n");
    }
    
    else {
    int num;
    num = fscanf (ptr, "%d", &num);
    printf ("the value of num is %d \n", num);

    fscanf (ptr, "%d", &num);
    printf ("the value of num is %d \n", num);
    }

    fclose (ptr);

    return 0;
}