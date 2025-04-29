#include "sfsort.h"

using namespace std;

int main()
{	
    vector<int> arr;
    string inputName{"input1.txt"};
    string outputName{ "output.txt" };

    for (int i = 1; i < 6; i++)
    {
        inputName.replace(5, 1, to_string(i));
        read(arr, inputName);
    }
    quickSort(arr, 0, arr.size() - 1);

    write(arr, outputName);

	return 0;
}