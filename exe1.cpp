#include <iostream>
#include <Random>

using namespace std;
/*Johann Batson
  400000715
  Lab4.2
  */

const int n = 5;//represents the 5 matrices

void VComp(int A[n][n], int B[n][n])// this is a two deminsional array used to populate the 5 x 5 matrices
{
	int S1 = 0;
	int S2 = 0;
	int C[n][n];
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			S1 = A[a][b] + S1;//The sum of S1 elements of the first array
			S2 = B[a][b] + S2;//The sum of the elements in the second array
		}
	}

	for (int w = 0; w < n; w++)
	{
		for (int k = 0; k < n; k++)
		{
			C[w][k] = A[w][k] + B[w][k];
		}
	}

	cout << "The S1 is: " << S1 << endl;
	cout << "The S2 is: " << S2 << endl << endl;
	cout << "The contents of C are as follows: " << endl; //the contents of the computation is outputed from here
	for (int x = 0; x < n; x++)
	{
		for (int m = 0; m < n; m++)
		{
			cout << C[x][m] << " ";
			if (m == n - 1)
			{
				cout << endl;
			}//if
		}//for
	}//for
}//VComp(int A[n][n], int B[n][n])

int main()
{
	int TheArray1[n][n];
	int TheArray2[n][n];
	std::random_device rd;// the random number generator to generate random number -50 straight to 50
	std::mt19937 gen(rd());//the engine
	std::uniform_int_distribution<> random(-50, 50);//the numbers in the range from  -50 to 50
	

	//Generating random numbers for the 1st vector
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			TheArray1[i][k] = random(gen);
		}
	}
	//Generating random numbers for the 2nd vector
	for (int y = 0; y < n; y++)
	{
		for (int l = 0; l < n; l++)
		{
			TheArray2[y][l] = random(gen);
		}
	}

	cout << "The contents of the Vector 1 are as follows: " << endl;
	for (int c = 0; c < n; c++)
	{
		for (int v = 0; v < n; v++)
		{
			cout << TheArray1[c][v] << " ";
			if (v == n - 1)
			{                            //these are the contents of the first array
				cout << endl;
			}
		}
	}
	cout << endl;

	cout << "The contents of the Vector 2 are as follows: " << endl;
	for (int h = 0; h < n; h++)
	{
		for (int g = 0; g < n; g++)
		{
			cout << TheArray2[h][g] << " ";
			if (g == n - 1)
			{
				cout << endl;            //these are the contents of the second array
			}
		}
	}
	cout << endl;
	VComp(TheArray1, TheArray2);
	system("pause");
}//int main()






