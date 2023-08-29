#include<iostream.h>
#include<conio.h>
void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[10];
	i = low;
	k = 0;
	j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}

void main()
{
	int n=10, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
	int arr[10];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	MergeSort(arr, 0, n-1);
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
	cout<<"->"<<arr[i];
	getch();
}