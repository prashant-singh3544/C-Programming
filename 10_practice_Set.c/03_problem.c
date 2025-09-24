#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("prashant.txt", "r");
    ptr2 = fopen ("prashant4.txt", "a");
    while (1)
    {

        ch = fgetc(ptr);
        // when all the content of the file has been reas break
        if (ch == EOF)
        {
            break;
        }
        else{
            fprintf (ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }  
    
    return 0;
}