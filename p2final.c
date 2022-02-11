#include<stdio.h>

int input();
int cmp(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main() {
  int x, y, z, result;
  printf("Enter 3 numbers to compare : ");
  x = input();
  y = input();
  z = input();
  result = cmp(x, y, z);
  output(x, y, z, result);
  return 0;
}

int input() {
  int a;
  scanf("%d", &a);
  return a;
}

int cmp(int a, int b, int c) {
  if(a > b && a > c)
  return a;
  if(b > a && b > c)
  return b;
  if(c > b && c > a)
  return c;
}

void output(int a, int b, int c, int largest) {
  printf("\"%d\" is th largest number of (%d,%d,%d)\n", largest, a, b, c);
}