#include <iostream>
using namespace std;

int main() {

	int intArray[5];
	int arraySize = sizeof(intArray) / sizeof(intArray[0]);

	for(int i=0; i<arraySize; i++) {
		cin >> intArray[i];
	}

	int clone[arraySize];
	for(int i=0; i<arraySize; i++) {
		clone[i] = intArray[i];
	}
	
	int min = 0, max = 0, median = 0;

	for(int i=0; i<arraySize; i++) {
		if(i==0){
			min = intArray[0];
			max = intArray[0];
			median = max;
		}
		for(int j=0; j<arraySize; j++) {
			//1 3 5 4 2
			//1 3 4 5 2
			//1 3 4 2 5
			//1 3 2 4 5
			//1 2 3 4 5
			if(intArray[j] < min){min=intArray[j];}
			if(intArray[j] > max){max=intArray[j];}
			
			if(intArray[j] > intArray[j+1]) {
				int tmp = intArray[j];
				intArray[j] = intArray[j+1];
				intArray[j+1] = tmp;
			}
		}
	}

	median = intArray[arraySize/2];
	
	cout << "Sorted: ";
	for(int i=0; i<arraySize; i++) {
		cout << intArray[i] << " ";
	}
	cout << endl;

	cout << "MIN: " << min << endl;
	cout << "MAX: " << max << endl;
	cout << "MEDIAN: " << median << endl;

	return 0;
}
