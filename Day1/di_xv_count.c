#include <stdio.h>

int main() {
  char n, count= 0;

  while (scanf("%c", &n) != EOF) 
  {
    count = count+1;
  }  

  printf("%d characters in your input \n", count);

  return 0;
}