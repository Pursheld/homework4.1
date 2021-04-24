
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int sum = 0;
	int index;
	const int N = 3;
	int arr[N][N] = { {1,2,3} , {1,2,3} };

	time_t now = time(0);
	tm* ltm = localtime(&now);
	int day = ltm->tm_mday;

	for(int i=0;i<N;i++)
	{
		
			index = day / N;
			sum += arr[i][index];
			
			
	}
	cout << sum;
}