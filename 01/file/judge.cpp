#include<stdio.h>

extern int a;
extern int b;


int Judge()
{	
	// 1‚ğ•Ô‚·
	if (a == b)
	{
		printf("ƒNƒŠƒAI\n");
		return 1;
	}
	// 0‚ğ•Ô‚·
	else if (b < a)
	{
		printf("¬‚³‚¢\n");
	}
	else if (b > a)
	{
		printf("‚Å‚©‚¢\n");
	}
	return 0;
}
