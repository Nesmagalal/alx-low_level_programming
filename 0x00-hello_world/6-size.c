#include <stdio.h>
/**
 * main -Entry piont
 *
 *description: using sizeof "/
 *return :always 0(success)
*/
int main(void)
{
printf("Size of a char:%u byte(s)\n", sizeof(char));
printf("Size of an int:%u byte(s)\n", sizeof(int));
printf("Size of a long int:%u byte(s)\n", sizeof(long int));
printf("Size of a long long int:%u byte(s)\n", sizeof(long long int));
printf("Size of a float:%u byte(s)", sizeof(float));
return (0);
}
