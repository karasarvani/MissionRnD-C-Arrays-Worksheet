/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

struct student ** topKStudents(struct student *students, int len, int K) {
	struct student temp, **Arr;
	int i, j = 0, k;
	if (students&&len>0 && K>0)
	{
		Arr = (struct student**)malloc(sizeof(struct student)*K);
		for (i = 0; i<len - 1; i++)
		{
			for (j = i + 1; j<len; j++)
			{
				if ((students[i].score)<(students[j].score))
				{
					temp = students[i];
					students[i] = students[j];
					students[j] = temp;
				}
			}
		}
		for (i = 0; i<K; i++)
		{
			Arr[i] = &students[i];
		}
		return Arr;
	}
	else
		return NULL;
}
