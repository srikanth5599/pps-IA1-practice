#include<stdio.h>

float input();
float my_sqrt(float num);
void output(float num, float sqrt_result);

int main() {
  float n = input();
  output(n, my_sqrt(n));
  return 0;
}

float input() {
  float num;
  printf("Enter a number to take square root : ");
  scanf("%f", &num);
  return num;
}

float my_sqrt(float num) {
  float p=num/2;
  float sqrt_result = 0.5 *(p+(num/p));
  while((p-sqrt_result) > 0.0000001) {
    p=sqrt_result;
    sqrt_result= 0.5 *(p+(num/p));
  }
  return sqrt_result;
}

void output(float num, float sqrt_result) {
  printf("√%f (Approx) = %f\n", num, sqrt_result);
}