#include <stdio.h>
int main()
{ int array[10], key, i, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search\n");
  scanf("%d", &key);
  for (i= 0; i < n; i++)
     { if (array[i] == key)
    {
      printf("search successful and %d is present at location %d.\n", key, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", key);
  return 0;
}
