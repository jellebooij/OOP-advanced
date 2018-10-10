#include <iostream>
#include <string>

template<typename T>
void swap(T* a, T* b) {
	
	T temp = *a;
	*a = *b;
	*b = temp;

}

template<typename T>
int partition(T arr[], int low, int high)
{
	T pivot = arr[high];    // pivot 
	int i = (low - 1);  // Index of smaller element 

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or 
		// equal to pivot 
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

template<typename T>
void sort(T myArray[], int low, int high) {

	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(myArray, low, high);

		// Separately sort elements before 
		// partition and after partition 
		sort(myArray, low, pi - 1);
		sort(myArray, pi + 1, high);
	}


}

int main() {

	std::string poep[5] {
		"aard", "geert", "berend", "zjacky", "claudia"
	};
	
	int n = sizeof(poep) / sizeof(poep[0]);
	sort(poep,0, n - 1);

	for (size_t i = 0; i < n; i++)
	{
		std::cout << poep[i] << std::endl;
	}



	//if (poep < kak) {
		//std::cout << "hoi";
	//}
	
	//std::cout << "poep";

	std::cin.get();

	return 0;
}