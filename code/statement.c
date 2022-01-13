#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*  int *p;

    typedef int num; 可以定義指標變數也可以定義int變數
    num *p;

    typedef int *num; 很明確告訴人我將定義指標變數
    num  p;
                    life time       scope
    auto            block~block     block scope
    static auto     start~end       block scope
    register        大部分編譯都已有所謂最佳化功能
    extern          執行~結束       跨檔案的所有函式
    static extern   執行~結束       同一檔案所有函式

    static跟auto差在lifetime，static是用位址存、auto是用堆疊，而視野要看宣告在函式內外
    */
    typedef int s;  //用int 也可以但會 warning 但會沒有使用"別名"
    s a = 5;
    printf("% d\n", a);
    char b[]="ting";
    printf("%s\n", b);

    typedef struct rsosor //特別的宣告法 有個別名ps 可以ps qw ;宣告變數qw
    {
        int score;
        char eer;
    }ps ;
    struct rsosor qw; //代表使用別名，原資料型態還是可以用。ps qw; == struct rsosor qw;
    qw.score = 8;
    qw.eer = 'q';

    printf("%d\n", qw.score);
    printf("%d\n", qw.eer);   //'q'是char也代表int，int eer;char eer; 都可以%c,%d輸出

    struct 
{
    int a;
} x,y;

x.a = 6;
y.a = 7; // y.a區域變數宣告預設為記憶體位址 1394760000，全域(外在)變數宣告則預設0
printf("%d%d\n", x.a, y.a); 

struct myclass
{
    int yo;
} myyo;             // myyo是struct tag
myyo.yo = 22;
printf("%d\n", myyo.yo);

struct soso
{
    int logo;
} logoA;

logoA.logo = 7;
printf("%d\n", logoA.logo);
}