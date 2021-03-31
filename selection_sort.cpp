#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Just in case 
	//WistfulPeace_7
	cout << "Enter the size of the array: \n";
	int n;cin >> n;
	//declaring array of size n that is to be sorted
	int a[n];
	//taking input for the array
	cout << "Enter the array of size " << n <<": \n";
	for(int i = 0; i < n; i++)
		cin >> a[i];
	//selection sort algorithm
	//in selection sort the algorithm finds the minimum element of the array and 
	//place it in the beginning. the time complexity for this algorithm is O(n^2)
	for(int i = 0; i<n; i++)
	{
		int min_index=i;
		for (int j=i+1; j<n; j++)
		{
			if(a[j]<a[min_index])
				min_index=j;
		}
		int temp=a[i];
		a[i]=a[min_index];
		a[min_index]=temp;
	}
	//outputing the sorted array 
	for (int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}