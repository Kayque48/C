#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE 5
 
bool is_sorted(int *a, int n)
{
  while ( --n >= 0 ) {
    if ( a[n] < a[n-1] ) return false;
  }
  return true;
}
 
void shuffle(int *a, int n)
{
  int i, t, r;
  for(i=0; i < n; i++) {
    t = a[i];
    r = rand() % n;
    a[i] = a[r];
    a[r] = t;
  }
}
 
void bogosort(int *a, int n)
{
  while ( !is_sorted(a, SIZE) ) shuffle(a, SIZE);
}
 
int main()
{
  int numbers[SIZE];
  srand(time(0));
  int i;
 
 for(i = 0; i < SIZE; i++)
 {
     numbers[i] = rand() % 100;
 }
  bogosort(numbers, SIZE);
  for (i=0; i < SIZE; i++) printf("%d ", numbers[i]);
  printf("\n");
  
  printf("\n\n\n\nCréditos: Kayque Costa da Silva :)");
}