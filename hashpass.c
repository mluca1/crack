
/*Matt L, Lab 09 (Start Cracking)
* April 10, 2019
* Last Edit: April 10, 2019 @ 15:23pm
*/

#include <stdio.h>
#include "md5.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

// Open the file for reading, using the argv array as the source
// for the filenames
    FILE *h = fopen(argv[2], "w");
    if (!h)
    {
        printf("Can't open %s for writing\n", argv[2]);
        exit(1);
    }
    