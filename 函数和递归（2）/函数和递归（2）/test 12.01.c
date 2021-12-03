#define  _CRT_SECURE_NO_WARNINGS

#include"add.h"
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;


}
#include<stdio.h>
int main()
{
	printf("hehe\n");
	main();
		return 0;

}
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}

	printf("%d ", n % 10);


}





int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
#include<stdio.h>
int my_strlen(char*str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

int my_strlen(char*str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;

}


int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d", len);
	return 0;



}