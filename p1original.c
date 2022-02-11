#include<stdio.h>

void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main() {
  int x, y, ans;
  input(&x, &y);
  add(x, y, &ans);
  output(x, y, ans);
  return 0;
}

void input(int *a, int *b) {
  printf("Enter a number : ");
  scanf("%d", a);
  printf("Enter another number : ");
  scanf("%d", b);
}

void add(int a, int b, int *sum) {
  *sum = a + b;
}

void output(int a, int b, int sum) {
  printf("Result of %d + %d = %d\n", a, b, sum);
}