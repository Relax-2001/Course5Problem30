#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillArrayWithRandomNumbers(int Arr[100] , int Arr2[100] , int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		Arr[i] = RandomNumber(1, 10);
		Arr2[i] = RandomNumber(1, 10);
	}

}

void SumOf2Aarrays(int Arr1[100] , int Arr2[100] , int Arr3[100] , int ArrLength)
{
	
	for (int i = 0; i <= ArrLength; i++)
	{
		Arr3[i] = Arr1[i] + Arr2[i];
	}

}

void PrintArray(int Arr[], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr1[100], Arr2[100] , Arr3[100];
	int ArrayLength = ReadPositiveNumber("Enter a positive number");

	FillArrayWithRandomNumbers(Arr1, Arr2 , ArrayLength);

	cout << "\nArray 1 elements :\n";
	PrintArray(Arr1, ArrayLength);

	cout << "\nArray 2 elements :\n";
	PrintArray(Arr2, ArrayLength);

	 
	SumOf2Aarrays(Arr1, Arr2, Arr3, ArrayLength);
	cout << "\nArray 3 elements :\n";
	PrintArray(Arr3, ArrayLength);


}