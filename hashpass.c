
/*Matt L, Lab 09 (Start Cracking)
* April 10, 2019
* Last Edit: April 10, 2019 @ 1:51pm
*/

#include <stdio.h>
#include "md5.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

// Open the file for reading, using the argv array as the source for the filenames.
    FILE *h = fopen(argv[2], "w");
    if (!h)
    {
        printf("Can't open %s for writing\n", argv[2]);
        exit(1);
    }
    
    FILE *f = fopen(argv[1], "r");
        if (!f)
        {
            printf("Can't open %s for reading\n", argv[1]);
            
        }

// Need a linecount and a buffer
    int linecount = 0;
    char buf [512];

// Read lines into buffer 
    while(fgets(buf, 512, f) != NULL)
        {
        linecount ++;
        char *hash = md5 (buf, strlen(buf)-1);
        fprintf(h, "%s\n", hash);
        free(hash);
        }

// Close the files
    fclose(f);
    fclose(h);

}