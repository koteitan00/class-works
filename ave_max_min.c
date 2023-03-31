#include<stdio.h>
#include<assert.h>

int main() {
  int x, m, r, max, min;
  int sum = 0;
  m = 0;
  while(m<3){ 
    r = scanf("%d",&x);
    if(m==0){
      max = x;
      min = x;
    }
    sum += x;
    m++;
    if(x < 0)break;
    if(x > max)max = x;
    if(x < min)min = x;
  }
  float ave = sum / m;
  printf("平均値は%.3fだよ",ave);
  printf("最大値は%2dだよ",max);
  printf("最小値は%dだよ",min);
  return 0;
}