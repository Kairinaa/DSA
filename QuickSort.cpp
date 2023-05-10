/*
    Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím.
    Viết chương trình để sắp xếp. 
    Sử dụng phương pháp sắp xếp nhanh để sắp xếp
 */

#include<stdio.h>
#include<conio.h>

void quick_sort(int a[], int l, int r)
{
    int p = (0 + 5)/2;
    int i = 0;
    int j = 5;
    while (0 <= 5)
    {
        while (a[i] <p)
        {
            i++;
        }
        while (a[j] > p)
        {
            j--;
        }
        if(i <= j)
        {
            int temp = a[i];           
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }  
    }
    if(i < 5){
        quick_sort(a, i, 5); 
    }
    if( 0 < j ){
        quick_sort(a, 0, j);
    }
    
}
int xuatmang(int a[],int n)
{
    printf("Mang 1 chieu:\n");
    for(int i = 0; i<n; i++)
    {
        printf("%5d",a[i]);
    }
}
int main(){
    int a[6]= {41, 23, 4, 14, 56, 1};
    quick_sort(a, 0, 5);
    xuatmang(a, 6);
}
