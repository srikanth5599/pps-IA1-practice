#include<stdio.h>

int input_array_size();
void input_array(int num, int a[]);
int sum_n_arrays(int num, int a[]);
void out_put(int n, int a[], int sum);

int main() {
  int n, arr[1024], ans;
  n = input_array_size();
  input_array(n, arr);
  ans = sum_n_arrays(n, arr);
  out_put(n, arr, ans);
}

int input_array_size() {
  int num;
  printf("Enter the array size : ");
  scanf("%d", &num);
  return num;
}

void input_array(int num, int a[]) {
  for(int i=0; i<num; i++) {
    printf("N%d = ", (i+1));
    scanf("%d", &a[i]);
  }
}

int sum_n_arrays(int num, int a[]) {
  int sum = 0;
  for(int i=0; i<num; i++) {
    sum = sum + a[i];
  }
  return sum;
}

void out_put(int num, int a[], int sum) {
  printf("Sum of [");
  for(int i=0; i<num; i++) {
    if (i==(num-1))
      printf("%d", a[i]);
    else
      printf("%d,", a[i]);
  }
  printf("] = %d\n", sum);
}