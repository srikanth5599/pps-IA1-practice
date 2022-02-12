#include<stdio.h>

int input_n();
int sum_n(int n);
void output(int n, int sum);

int main() {
  int num = input_n();
  int answer = sum_n(num);
  output(num, answer);
  return 0;
}

int input_n() {
  int a;
  printf("Enter the number \"n\" to get the sum of n numbers : ");
  scanf("%d", &a);
  return a;
}

int sum_n(int n) {
  int sum = 0;
  for(int i = 1; i<=n; i++) {
    sum = sum + i;
  }
  return sum;
}

void output(int n, int sum) {
  printf("The sum of first \"%d\" numbers of positive integers = %d\n", n, sum);
}