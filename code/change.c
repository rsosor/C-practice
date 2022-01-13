#include<stdio.h>
#include<stdlib.h>
struct 
{
    int a;
} x,y;

int main(int argc,char **argv)
{
    x.a = 6; // y.a預設0
    printf("%d%d\n", x.a,y.a);





}