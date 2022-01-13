#include<stdio.h>

float *find();
int max(int x,int y)
{
    return (x > y ? x : y);
}
int main()
{
    static float score[][4] = {{60, 70, 80, 90}, {56, 89, 34, 45}, {34, 23, 56, 45}};
    float *p;
    int i, m;
    printf("Enter the number to be found:");
    scanf("%d", &m);
    printf("the score of NO.%d are:", m);
    p = find(score, m);
    for (i = 0; i < 4;i++)
        printf("%5.2f\t", *(p + i));

    int (*ptr)();
    int a, b, c;
    ptr = max;
    scanf("%d,%d", &a, &b);
    c = (*ptr)(a, b);
    printf("a=%d,b=%d,max=%d", a, b, c);
    
}
float *find(float (*pointer)[4],int n)
{
    float *pt;      //return float* 所以要有定義float *var
    pt = *(pointer + n);  //float *pointer為score (score為陣列初始位址) ,int n為m 是scanf讀取m值賦予n
    return pt;
}

//  當你要用scanf讀取的值去跑函式的時候(可能要打出去才開始執行函式但不差那時間)，就要使用函式指標 c=(*ptr)(a,b); a,b是scanf的%d%d,&a&b
//  如此我們在輸入鍵盤的時候就可以把引數輸入進函式