#include"input.h"
#include"judge.h"

bool is_looping = false;
int main()
{
	Randam();

	while (true)
	{
		number();
		// 1で返ったら抜け出す
		if (Judge() == 1)
		{
			break;
		}
		
		
	}	
}