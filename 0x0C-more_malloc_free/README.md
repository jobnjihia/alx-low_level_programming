General
How to use the exit function
What are the functions calloc and realloc from the standard library and how to use them
0. Trust no one
Function that allocates memory using malloc.
1. string_nconcat - function that concatenates two strings.
Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
2. _calloc
function that allocates memory for an array, using malloc.
Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
3. array_range
function that creates an array of integers.

Prototype: int *array_range(int min, int max);
The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array

