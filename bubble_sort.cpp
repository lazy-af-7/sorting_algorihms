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
	//bubble sort algorithm
	for(int i=0; i<n-1; i++)
	{
		//we can optimise this algorithm by checking if any swap has happened or not 
		//if not we can break the loop as the array would have been already sorted in which the
		//time complexity in best case would be O(n) and worst case would be O(n^2)
		bool flag=false;
		//we take j<n-i-1 as last i integers would have already been sorted
		for (int j=0; j<n-i-1; j++)
		{
			//if a[i]>a[j] we will swap those elements
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=true;
			}
		}
		if(flag==false)
			break;
	}
	//outputing the sorted array 
	for (int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}