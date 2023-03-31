#include<stdio.h>
#include<drawlib.h>
#include<time.h>

int main(void) {
 dl_initialize(1.0);
 int x = 160, y = 180;
 dl_line(x, y, x+130,y, dl_color_from_name("blue"), 2);
 dl_line(x,y,x,y+100,dl_color_from_name("blue"), 2);
 dl_line(x+130,y,x+130,y+70,dl_color_from_name("blue"), 2);
 dl_line(x+130,y+70,x+180,y+70,dl_color_from_name("blue"), 2);
 dl_line(x+180,y+70,x+180,y+100,dl_color_from_name("blue"), 2);
 dl_line(x,y+100,x+180,y+100,dl_color_from_name("blue"), 2);
 dl_rectangle(x+30,y+15,x+110,y+65,dl_color_from_name("black"),2,0);
 dl_circle(x+35,y+100,17,dl_color_from_name("black"),2,0);
 dl_circle(x+100,y+100,17,dl_color_from_name("black"),2,0);
 dl_line(x+20,y+100,x+50,y+100,dl_color_from_name("white"),2);
 dl_line(x+85,y+100,x+115,y+100,dl_color_from_name("white"),2);
 dl_line(480,160,480,280,dl_color_from_name("black"),2);
 dl_rectangle(400,160,480,200,dl_color_from_name("black"),4,0);
 int startTime, endTime;
 int totalTime = 0;
 startTime = clock() / CLOCKS_PER_SEC;
   while(1){
   if(totalTime > 10) { 
       dl_circle(440,180,15,dl_color_from_name("red"),2,1);
   }
   
   endTime = clock() / CLOCKS_PER_SEC;
   totalTime = endTime - startTime;
   }


 while (1) {
     dl_wait(0.01);
 }

 
 return 0;
}
