#include<stdio.h>
#include<stdlib.h>
int main(int n,char *v[]){int a=n>2, w=a?atoi(v[1]):288,h=a?(atoi(v[2]
)/6)*6:192,i,y,x,c[18]={230,0,0,255,142,0,255,239,0,0,130,27,0,75,255,
120,0,137};printf("P6\n%d %d\n255\n",w,h);for(i=0;i<6;i++)for(y=0;y<h/
6; y++) for(x=0;x<w;x++)printf("%c%c%c", c[i*3], c[i*3+1], c[i*3+2]);}
