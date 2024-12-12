#include <stdio.h>
int main() {
	int time, luong;
	float phuCap, total;
	printf("Nhap so gio lam trong thang: ");
	scanf("%d",&time);
	printf("Nhap so tien lam trong mot gio: ");
	scanf("%d",&luong);
	total = luong * time;
	if (time > 160) {
		phuCap = total * 0.1;
	} else {
		phuCap = 0;
	}
	printf("Tong tien luong: %.2f", total + phuCap);
	
}
