#include<stdio.h>
#include<conio.h>

long Tich(int n)
{
    if(n == 0)
        return 1;
    return Tich(n - 1) * n;
}

int main()
{
    int n, S;
    printf("Nhap n = "); scanf("%d", &n);

    S = Tich(n);
    printf("S = %d", S);

    getch();
    return 0;
}
