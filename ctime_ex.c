// coming from "Expert C Programming"
#include <stdio.h>
#include <time.h>

int
main(void)
{
 time_t biggest = 0x7FFFFFFF;
 printf("biggest = %s \n", ctime(&biggest) );

 return 0;
}
