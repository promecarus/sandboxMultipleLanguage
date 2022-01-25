#include <iostream>
using namespace std;

// prosedur input array
void InputArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> arr[i];
	}
}

// fungsi minimum
int minimum(int arr[], int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

// fungsi maksimum
int maksimum(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int batas, min, maks;
	cout << "Banyak isi array : ";
	cin >> batas;
	int A[batas];

	InputArray(A, batas);
	cout << endl;
	
	min = minimum(A, batas);
	cout << "Minimum : " << min << endl;
	
	maks = maksimum(A, batas);
	cout << "Maksimum : " << maks << endl;

	system("pause");
	return 0;
}
