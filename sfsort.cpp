#include "sfsort.h"

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int partition(vector<int>& arr, int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void read(vector<int>& arr, string inputName)
{
	int num;
	ifstream input(inputName);

	if (!input) {
		std::cerr << "Error while opening file";
		exit(1);
	}

	while (input >> num) {
		arr.push_back(num);
	}
	input.close();
}

void write(vector<int>& arr, string outputName)
{
	ofstream output(outputName, ofstream::out);
	if (!output) {
		std::cerr << "Error while opening file";
		exit(1);
	}

	for (int n : arr) {
		output << n << " ";
	}
	output << "\n";

	output.close();
}
