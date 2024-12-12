#include <stdio.h>
int main() {
	int money, choose;
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n\n");
	printf("%15s\n", "1.  USD to VND");
	printf("%15s\n", "2.  EUR to VND");
	printf("%15s\n", "3.  GBP to VND");
	printf("%15s\n", "4.  JPY to VND");
	printf("%15s\n", "5.  VND to USD");
	printf("%15s\n", "6.  VND to EUR");
	printf("%15s\n", "7.  VND to GBP");
	printf("%15s\n", "8.  VND to JPY");
	
	printf("Nhap so ban muon chuyen doi tien: ");
	scanf("%d", &choose);
	printf("Nhap so tien ban muon chuyen doi: ");
	scanf("%d", &money);
	switch(choose) {
		case 1:
			printf("%d USD = %.3f VND", money, 23.5*money);
			break;
		case 2:
			printf("%d EUR = %.3f VND", money, 25.0*money);
			break;
		case 3: 
			printf("%d GBP = %.3f VND", money, 28.0*money);
			break;
		case 4:
			printf("%d JPY = %.3f VND", money, 0.18*money);
			break;
		case 5:
			printf("%d VND = %.1f USD", money, money/1000/23.5);
			break;
		case 6:
			printf("%d VND = %.1f EUR", money, money/1000/25.0);
			break;
		case 7:
			printf("%d VND = %.1f GBP", money, money/1000/28.0);
			break;
		case 8:
			printf("%d VND = %.1f JPY", money, money/1000/0.18);
			break;
		default:
			printf("So ban nhap khong hop le");
			break;
	}
	return 0;
}
