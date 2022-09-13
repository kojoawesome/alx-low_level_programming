Task 0.txt
Who has access
A
System properties
Type
Text
Size
532 bytes
Storage used
532 bytes
Location
Variables if else while
Owner
Antony Bahati
Modified
Sep 10, 2022 by Antony Bahati
Opened
5:16 AM by me
Created
Sep 10, 2022
No description
Viewers can download
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
