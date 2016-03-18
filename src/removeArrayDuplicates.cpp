/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
#include<malloc.h>
int removeArrayDuplicates(int *Arr, int len)
{
	int index, temp, index1, index2;
	if (Arr&&len>0)
	{
		for (index = 0; index<len - 1; index++)
		{
			for (index1 = index + 1; index1<len; index1++)
			{
				if (Arr[index] == Arr[index1])
				{
					for (index2 = index1 + 1; index2<len; index2++)
					{
						Arr[index2 - 1] = Arr[index2];
					}
					len--;
				}
			}
		}
		return len;
	}
	else
		return -1;
}
