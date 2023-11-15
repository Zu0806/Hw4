#include <stdio.h>
#include <stdbool.h>

void modifiedBubbleSort(int array[], int size) {
	bool swapped;

	for (int pass = 0; pass < size - 1; ++pass) {
		swapped = false;

		for (int i = 0; i < size - 1 - pass; ++i) {
			// Compare adjacent elements and swap if necessary
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
			}
		}

		// If no swaps were made, the array is already sorted
		if (!swapped) {
			break;
		}
	}
}

int main() {
	int i,data[5];

	printf("input 5 number:");
	for (i = 0; i < 5; i++)
		scanf("%d", &data[i]);
	

	// Call the modifiedBubbleSort function
	modifiedBubbleSort(data, 5);

	// Display the sorted array
	printf("Sorted array: ");
	for (int i = 0; i < 5; i++) 
		printf("%d ", data[i]);
	printf("\n");
	system("pause");
	return 0;
}
