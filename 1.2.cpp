#include <stdio.h>
#include <conio.h>

struct HonSo
{
	float HonSo, TuSo, MauSo;
};

typedef struct HonSo HONSO;

void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &hs) 
{
	printf("Nhap vao tu so: ");
	scanf("%f", &hs.TuSo);
	
	printf("Nhap vao hon so: ");
	scanf("%f", &hs.HonSo);
	
		do
	{
		printf("Nhap vao mau so: ");
		scanf("%f", &hs.MauSo);
		
		if(hs.MauSo == 0)
		{
			printf("\nMau so phai khac 0. Xin kiem tra lai !");
		}
	}while(hs.MauSo);
}

void XuatHonSo(HONSO hs)
{
	printf("%f%f%f", hs.HonSo, hs.TuSo, hs.MauSo);
}

int main()
{
    HONSO hs;
    NhapHonSo(hs);
    XuatHonSo(hs);


    getch();
    return 0;
}
