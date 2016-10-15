#include <iostream>
using namespace std;
bool CheckUnassigned(int array[9])
{
	bool result;
	for (int i = 0; i < 9; i++)
	{
		if (array[i] == 0)
		{
			result = true;
		}
		else
			result = false;
	}
	return result;
}
int main()
{
	int row_change, temp;
	int array[9] = { 1,0,3,4,0,6,7,8,0 };
	while (CheckUnassigned(array) == true)
	{
		for (int i = 0; i < 9; i++)
		{
			if (array[i] == 0)
			{
				row_change = i;
				break;
			}
		}
		temp = array[row_change] + 1;
		for (int i = 0; i < 9; i++)
		{
			if (temp == array[i])
				temp++;
		}
		array[row_change] = temp;
	}
	for (int i = 0; i < 9; i++)
	{
		cout << array[i];
	}
	system("pause");
	return 0;
}