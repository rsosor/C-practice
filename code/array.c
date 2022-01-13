#include <stdio.h>
#include <stdlib.h>
extern int func(int a)
{
    a += 1;
    return a;
}
int main()
{
    float s[] = {4.5678954};
    printf("%f", *(s));     // *(s+val) == s[val],  //float預設小數六位數,超過四捨五入
    printf("\n");

    int a[5] = {7};
    int *p = a;
    printf("%d", *(p));     //*(p+val) 代表取值運算指標變數=p[0],代表a陣列名稱是一個陣列初始位址,p是指標陣列指向a陣列名稱的初始

    int o[] = {0};
    int *w = o;
    w = o;
    printf("\n%d", *o);
    char abc[] = "456789";
    printf("\n%d", abc[1]);

    int q[10];
    printf("%p", q);

    int fun;
    fun = func(99);
    printf("\n%d", func(99));

    //  指標函式 回傳陣列 我們就要用指標型態宣告函式
    //  傳遞陣列 我們可以使用指標接收此位址 int *array, int array[], int array[n]都一樣
    //  一般而言我們不知道要用多少的陣列元素,所以可以用指標
}