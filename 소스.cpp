#include <stdio.h>
struct show {
    char name[10];
    int su;
    int price;

};

int main()
{
    struct show t = {"스마트폰", 3, 960 };
    struct show* p;
    p = &t;
    (*p).su = 2;
    printf("% 6s % 10s % 14s\n", "품목", "수량", "금액(천 원)");
    printf("%8s %6d %12d", p->name, p->su, p->price);
    return 0;
}