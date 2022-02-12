#include<stdio.h>
#include<string.h>

void input_two_string(char *a, char *b);
void output(char *a, char *b, int result);

int main() {
  char word_1[1024], word_2[10244];
  input_two_string(word_1, word_2);
  int ans = strcmp(word_1, word_2);
  output(word_1, word_2, ans);
  return 0;
} 

void input_two_string(char *a, char *b) {
  printf("Enter a word : ");
  scanf("%s", a);
  printf("Enter another word to compare : ");
  scanf("%s", b);
}

void output(char *a, char *b, int result) {
  if (result < 0)
    printf("\"%s\" is greater than \"%s\"\n", b, a);
  else if(result == 0) 
    printf("\"%s\" is equal to \"%s\"\n", a, b);
  else if (result > 0)
    printf("\"%s\" is greater than \"%s\"\n", a, b);
}