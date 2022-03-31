/*Alexis Olivo-Alvarez
ITSE-2331 2801
30 March 2022
Create a funciton that takes an array pointer, doubles the array, and sends a pointer back to the new array */

//Including and Namespace
#include <iostream>
using namespace std;

//Functions

int* twiceArray(int *array, int size) { //takes a pointer for an array and sends back a pointer to the array doubled

	const int doubleSize = size * 2; //takes the size of the array and doubles it
	int* newArray = new int[doubleSize]; //pointer for new array

	for (int i = 0; i < size; i++) { //puts the orignial numbers of the first array into the new one
		newArray[i] = array[i];
	}

	for (int j = size; j < doubleSize; j++) { //adds 0's to the new length

		newArray[j] = 0;
	}

	return newArray; //returns pointer of new array
}

void displayArray(int array[], int size) { //displays contents of an array

	for (int k = 0; k < size; k++) {
		cout << array[k];
	}
}

//Main

int main()
{
	const int size = 5; //size for original array
    int regArray[size] = { 4,5,6,3,1 }; //regular array
	int * doubleArray; //pointer to doubled array

    cout << "normal array: "; //outputs normal array + it's contents

	displayArray(regArray, size);

	doubleArray = twiceArray(regArray, size); //calls funciton to double array

	cout << "\ndoubled array: "; //outputs doubled array + it's contents

	displayArray(doubleArray, size * 2);

}


