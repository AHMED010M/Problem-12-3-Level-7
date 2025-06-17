#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillaMatrix3x3(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);

		}

	}


}

bool AreTypicalMatrices(int arr[3][3], int arr2[3][3], int Rows, int Cols)
{
	

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (arr[i][j] != arr2[i][j])
			{
				return false;
			}
			

		}

	}
	
	return true;

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);

		}
		cout << "\n";
	}

}



int main()
{

	srand(time(0));

	int arr1[3][3];
	int arr2[3][3];


	FillaMatrix3x3(arr1, 3, 3);
	FillaMatrix3x3(arr2, 3, 3);

	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr1, 3, 3);

	cout << "\nMatrix 2 : " << endl;
	PrintMatrix(arr2, 3, 3);

	if (AreTypicalMatrices(arr1, arr2, 3, 3))
		cout << "\nYES : Matrices are Equal." << endl;
	else
		cout << "\nNo : Matrices are Not Equal." << endl;
	

}

