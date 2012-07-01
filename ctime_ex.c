#include <stdio.h>
#include <time.h>

int main() {
  time_t biggest = 0x7FFFFFFF;  // 0x80000000, the MSB is sign bit
  printf("biggest = %s \n", asctime(gmtime(&biggest)) );
  return 0;
}
