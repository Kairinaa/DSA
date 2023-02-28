#include<stdio.h>
#include<conio.h>

struct MatHang
{
	int donGia;
	char loaiHang[20];
	int tonKho;
};

typedef struct MatHang HANG;

//void NhapHang(HANG &);
//void XuatHang(HANG t);

void NhapHang(HANG &h)
{
	fflush(stdin);
	printf("Nhap vao loai hang: \n");
	gets(h.loaiHang);
	
	printf("\nGia tien mat hang: ");
	scanf("%d", &h.donGia);
	
	printf("\nSo luong hang ton kho: ");
	scanf("%d", &h.tonKho);
}

void XuatHang(HANG t)
{
	printf("Ten mat hang: %s\n",t.loaiHang);
	printf("Gia tien mat hang: %d\n",t.donGia);
	printf("So luong hang ton kho: %d\n",t.tonKho);
}

int main()
{
	HANG hh;
	NhapHang(hh);
	XuatHang(hh);
	
	getch();
	return 0;
}


