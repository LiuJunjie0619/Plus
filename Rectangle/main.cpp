#include <stdio.h>
int fun(float a, float b, float c)
{
    int n = 0;
    //n=0代表任意三角形
    //n=1代表等边三角形
    //n=2代表等腰三角形
    //n=3代表直角三角形
    //n=4代表不能构成三角形
    //n=5代表等要直角三角形
    if (a + b>c && (a - b)<c)
    {
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            n = 3;
        }
        if (a == b || a == c || b == c)
        {
            n = 2;
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            {
                n = 5;
            }
        }
        if (a == b && a == c)
        {
            n = 1;
        }
    }
    else
    {
        n = 4;
    }
    return n;
}




int main()
{
    float a, b, c;
    printf("输入数据\na=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("c=");
    scanf("%f", &c);
    switch (fun(a, b, c))
    {
    case 0:printf("三角形为任意三角形\n"); break;
    case 1:printf("三角形为等边三角形\n"); break;
    case 2:printf("三角形为等腰三角形\n"); break;
    case 3:printf("三角形为直角三角形\n"); break;
    case 4:printf("不能构成三角形\n"); break;
    case 5:printf("三角形为等腰直角三角形\n"); break;
    }
    return 1;
}
