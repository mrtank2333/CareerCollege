// if2.c
#include <stdio.h>
#include <string.h>
#include "get_line.h"

// 定数
#define BUFFER_SIZE 256

int main(void) {
  // 文字を取得
  char buffer[BUFFER_SIZE];
  printf("文字: ");
  get_line(buffer, BUFFER_SIZE);

  // 比較用の文字を作成
  char s[] = "abc";

  // 入力と比較
  //if (buffer == s) {
  if (strcmp(buffer, s) == 0) {
    printf("%s と %sなので、同じ文字列です\n", buffer, s);
  } else {
    printf("%s と %sなので、違う文字列です\n", buffer, s);
    printf("%p \t %p \n", buffer, s);
  }

  return 0;
}






