#include <stdio.h>

// qsort() function can be used to sort arrays in ascending or descending order or by 
// any other order and comparator function is also used in sorting
#include <stdlib.h>

int compare(const void * a, const void * b)
{
return ( *(int *)a - *(int *)b );
}

int main()
{
int arr[] = {20, 34, 56, 74, 89, 75};
int n = sizeof(arr)/sizeof(arr[0]), i;

qsort (arr, n, sizeof(int), compare);

for (i = 0 ; i < n ; i++)
{
printf("%d \n", arr[i]);
}
return (0);
}
