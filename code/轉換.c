#include <stdio.h>
#include <stdlib.h>
int f(int x){ char a[37]="0123456789abcdefghijklmnopqrstuvwxyz"; return a[x]; }
void conv(int q,int d){ if(q>=d)conv(q/d,d); printf("%c",f(q%d)); } 
int main(){int n,m; scanf("%d %d",&n,&m); printf("The base %d representation of %d is ",m,n); conv(n,m); printf(".\n"); system("PAUSE"); return EXIT_SUCCESS;}

//scanf The base value + binary value