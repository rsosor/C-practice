# include<stdio.h>
# include<math.h>
# include<conio.h>
# define PI 3.1415926 
//绘制心形线的函数
void  cardioid( int x, int y, int a)
//x: x方向上的偏移量/
//y: y方向上的偏移量
//a: 缩放倍数
{
int x1, y1, x2, y2;
 double angle = 0; 
while(angle <= 2* PI)
 {
x1 = a * ( 2* sin(angle) + sin( 2* angle)) + x; 
y1 = a * ( 2* cos(angle) + cos( 2* angle)) + y; 
angle += (PI / 180); 
x2 = a * ( 2* sin(angle) + sin( 2* angle)) + x;
 y2 = a * ( 2* cos(angle) + cos( 2* angle)) + y;
 line(x1, y1, x2, y2);Sleep( 5); 
}
}
int main( void) 
{initgraph( 960, 540); 
setlinecolor(RGB( 255, 0, 0)); 
cardioid( 480, 270, 50);
 int ret = getch;
 return 0;
 }