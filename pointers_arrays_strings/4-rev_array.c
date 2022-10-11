#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int arr pointer
 * @n: number of elements to swap
 *
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int l,tmp,r;

	r = n - 1;
	l = 0;

	/** assign values of a array in tmp
	 * then put last array in first array
	 * then put value in tmp to last array
	 */
	while (l < r)
	{
		tmp = a[l]; /** swap Pleft - Pright*/
		a[l] = a[r]; /** swap Pright - Pleft*/
		a[r] = tmp; /** swap Pleft - Pright*/
		l = l + 1; /* increment left array pointer*/
		r = r - 1; /* decrement right array pointer*/
	}
}
