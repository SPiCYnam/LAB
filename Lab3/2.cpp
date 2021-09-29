#include<stdio.h>
#include<iostream>
int main()
{	int j;
	int count = 0;
	for (j = 2; j<=10000;j++) 
	{
		int sum = 1; // ¹Ñº¤èÒ Ë.Ã.Á µÑé§áµè  1
		int x = 2;
		int n = j;
		while (x < n) {
			while (n % x == 0 && n != x){
				sum = sum + x;
				break;
			}
			x++;
		}
		if (sum == j)
		{
			printf("%d ",j );
				count++;
			}
	}
	//std::cout << count << std::endl;
	printf("Answers : %d", count);
	return 0;
}
