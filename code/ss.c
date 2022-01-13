#include <stdio.h>
#include <stdlib.h>
int soso;
int soso = 6; //int soso?w?g??i??static?~?b???
              //?p?G??????soso=565?b?æÌ?~?A?S????i?????A?]?i?A???w?]?Oint %d

int func1(int *a,int b)
{
    soso = 55; //int soso?w?g??i??static?~?b???
    *a = *a + 10;
    b = b + 100;
    printf("func1()??*a=%d\n", *a);
    printf("func1()??b=%d\n", b);
    return 5;
}
int main()
{
    soso = 33;
    int m, n, o,re;
    m = 2, n = 1;
    func1(&m, n);   //k=1,*m=&k)?N???£Z??}m?F//
    printf("main()??m=%d\n", m);
    printf("main()??n=%d\n",n);
    printf("re?O%d\n", func1(&m, n)); //?o????k?|???]?æÌ???|?O????A?L?Xre?O5 ??????£V@?????????^??? re=func1(&m,n); printf("re?O%d",re)?N?|?u?L?Xre?O5
    int *s = &o;
    o = 7;
    printf("*s=%d\n",*s);
    int p=9;
    int *a = &p;
    int k=10;
    *&p = k;
    int w = *a;
    k = p;
    printf("%d\n", *a);
    printf("%d\n", *&p);
   
    char e[1];
    e[0] = '5';


    int oo = 9;
    //int *q = &oo;
    int *q;
    q = &oo;
    printf("\n%p", q);
    printf("\n%d\n", soso);
    printf("-------------------------------------------------------------");
    int qp[2][3] = {0,1,2,3,5,1};
        printf("\n%d", qp[0][2]);
}