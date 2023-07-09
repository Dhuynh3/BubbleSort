#include <iostream>
#include <vector>


void BubbleSort(std::vector<int>& array) {
	

	for (int i = 0; i < array.size(); i++) {
		
		for (int j = 0; j < array.size() - i - 1; j++) {
				
			if (array[j] > array[j + 1]) {

				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

			}
 
		}
		
	}
	
}


int main() {

	std::vector<int> arr = { 71, 22, 99, 7, 14};
	
	BubbleSort(arr);

	for (auto num : arr) {
		printf("%i,", num);
	}

	system("pause");
	return 0;
}

