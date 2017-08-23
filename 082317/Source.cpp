#include <iostream>
int main()
{
	float keepRunning[5] = {1.0f, 2.5f, 3.5f, 10.0f, 1.5f};
	float a = keepRunning[0] + keepRunning[1] + keepRunning[2] + keepRunning[3] + keepRunning[4];

	float amRunning[5] = {1.5, 2.0, 3.0, 10.5, 1.7};
	float b = 0;
	for (int i = 0; i < 5; i++)
	{
		i += amRunning[i];
	}

system("pause");
}