/*
    Cho mảng 1 chiều các số thực. 
    Hãy viết hàm đệ quy kiểm tra mảng có thỏa mảng tính chất “toàn giá trị âm”
*/
#include<stdio.h>
int kttoanam(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }else{
        kttoanam(a,n-1);
        if(a[n-1] < 0)
        {
            return "toan am";
        }else{     
            return "Khong toan am";
            kttoanam(a,n-1);
        }
    }
}
int main()
{
    int a[5] = {-5,-1,-2,-3,-5};
    printf(kttoanam(a,5));
}
