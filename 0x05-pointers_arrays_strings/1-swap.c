#include "main.h"

/**
 * swap_int - main
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
