#include<math.h>
#include<stdio.h>

int main(){
long long int n;
printf("このプログラムは20の階乗まで対応しています。\n");
printf("What's the number? : x!\n");
printf("x = ");
scanf("%lld",&n);
long long x = 1;
while(n > 1){
x *= n;
n--;
}
printf("Answer is %-10lld\n",x);
return 0;
}
