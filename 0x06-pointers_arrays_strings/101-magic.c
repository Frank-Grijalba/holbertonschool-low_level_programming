#include <stdio.h>

int main(void)
{
	int n;
	int a[5];

	a[2] = 1024;

/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
<<<<<<< HEAD
<<<<<<< HEAD
 * - you are not allowed to code anything else than this line of code
 */
	*(&n + 3) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
=======
 * - you are not allowed to code anything else than line of code 
 */
  *(p + 5) = 98;
 /* ... so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
>>>>>>> aa600c5f82d9a061efa4445f0a85405fde2c27dd
=======
 * - you are not allowed to code anything else than this line of code
 */
	*(&n + 3) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
>>>>>>> d412466967a859dec0d565509b9302baeea5e348
}
