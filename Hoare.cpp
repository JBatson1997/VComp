#include <iostream>
using namespace std;
/*Johann Batson
400000715
Lab4.2*/
void partition(int arr[],int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)// the values are compared to the pivot and if it is less we swap
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}                             //the list of array will sort when it is less
	swap(arr[i + 1], arr[high]);
}

int main()
{
	int arr[] = { 36, 12, 39, 34, 89, 2, 47, 95, 17, 19, 78, 22 };// the list of array numbers

	int n = sizeof(arr) / sizeof(arr[0]);

	partition(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	system("pause");
}
