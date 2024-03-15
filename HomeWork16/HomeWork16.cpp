
#include <iostream>
#include <time.h>

int main()
{
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	std::cout << "Day: " << buf.tm_mday << '\n';

	const int N = 6;
	int array[N][N];
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			array[i][j] = i + j;
			std::cout << array[i][j] << " ";
		}
		std::cout << '\n';
	}

	for (int i = 0, count = 0; i < N; i++) 
	{
		if (buf.tm_mday % N == i) 
		{
			std::cout << "Line " << i + 1 << ": ";
			for (int j = 0; j < N; j++) 
			{
				std::cout << array[i][j] << " ";
				count += array[i][j];
			}
			std::cout << "= " << count;
		}

	}
}
