// Doğancan Kalıpçılar
// doancan.com
// http://doancan.com/atolye/c-ile-programlama-dunyasina-giris/
// 2.2.Toplama_Islemi.c

#include <stdio.h>

int main(){

	int sayi1;
	int sayi2;
	int sonuc;

	printf("Birinci tam sayıyı girin:\n");
	scanf("%d",&sayi1);
	printf("İkinci tam sayıyı girin:\n");
	scanf("%d",&sayi2);

	sonuc = sayi1 + sayi2;

	printf("Sonuç %d dir.\n",sonuc);

	return 0;

}