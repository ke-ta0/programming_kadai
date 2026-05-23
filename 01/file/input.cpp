#include<stdio.h>
#include<time.h>
#include<stdlib.h>


// ランダムな値
int a;
// 入力する値
int b;

void Randam()
{
	srand((unsigned)time(NULL));
	a = rand() % (9 + 1);

	printf("ランダムな値: %d\n", a);
}

void number()
{
	printf("数値を入力してください: ");
	scanf_s("%d", &b);
}