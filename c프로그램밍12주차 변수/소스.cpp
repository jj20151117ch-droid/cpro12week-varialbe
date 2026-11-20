#include<stdio.h>

//acount가 양웃이면 임급이고 음수면 출금으로 생각한다.
void save(int amount)
{
	static long balance = 0;

	if (amount >= 0)
		printf("%d\t\t", amount);
	else
		printf("\t%d\t", -amount);
	balance += amount;
	printf("%d\n", balance);
		
}

int main()
{
	printf("======================================\n");
	printf("입금\t출금\t잔고\n");
	printf("======================================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(300000);
	printf("======================================\n");
	return 0;
}