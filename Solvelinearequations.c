/* 一次方程式のクイズ */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int xa, a, b, x;
  

  srand((unsigned int)time(NULL));
  xa = rand() % 100;
  a = rand() % 28 + 3;
  b = rand() % 30 - 15;
  
  
    int c = xa * a + b;
    printf("x * %d + %d = %dのときのxを答えよ\n",a,b,c);
    printf("\nx = ");
    scanf("%d",&a);
   if(xa == a)printf("正解！！！");
   else {
     printf("残念。。。");
     printf("答えは%dだよ",xa);
   }
  return 0;
}
