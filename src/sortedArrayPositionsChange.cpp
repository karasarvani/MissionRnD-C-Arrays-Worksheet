/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int left_ind = 0, right_ind = len - 1, temp, i = 0;
	if (Arr&&len >= 0)
	{
		for (;;)
		{
			if (left_ind == len - 1)
			{
				left_ind++;
				break;
			}
			if (Arr[left_ind]>Arr[left_ind + 1])
				break;
			if (Arr[left_ind]<Arr[left_ind + 1])
				left_ind++;
		}
		for (;;)
		{
			if (right_ind == 0)
			{
				right_ind--;
				break;
			}
			if (Arr[right_ind]>Arr[right_ind - 1])
				right_ind--;
			if (Arr[right_ind]<Arr[right_ind - 1])
				break;
		}
		if (left_ind != len&&right_ind != -1)
		{
			temp = Arr[left_ind];
			Arr[left_ind] = Arr[right_ind];
			Arr[right_ind] = temp;
		}
	}
	else
	{
		return NULL;
	}
}
