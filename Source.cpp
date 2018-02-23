#include <iostream>
using namespace std;
int myArray[8]; // init array
int arraySize; // array size
int temp1;
int temp2;

const int sizeOfArray = 2; // size of the split into arrays
int arr1[sizeOfArray];
int arr2[sizeOfArray];
int arr3[sizeOfArray];
int arr4[sizeOfArray];
void splitArray(int myArray[]); // split function
void sortDesending(int theArray[]); // decsending orde sort

int arrayMerge1[4];
int arrayMerge2[4];
void mergeing(int myarray1[], int myarray2[]);



int main() {
	cout << "Please enter the numbers to be sorted: ";
	for (int i = 0; i <= 7; i++){//user input
		cin >> myArray[i];
	}
	cout << "The numbers are: ";
	for (int j = 0; j <= 7; j++) // outout numbers to the user
	{
		cout << myArray[j] << " ";
	}

	arraySize = sizeof(myArray) / sizeof(*myArray); // find array size
	cout << endl;
	cout << "The size of the array is: " << arraySize << endl; // display array size
	cout << endl;
	cout << endl;
	splitArray(myArray); // split array function 
	sortDesending(arr1);
	cout << endl;
	sortDesending(arr2);
	cout << endl;
	sortDesending(arr3);
	cout << endl;
	sortDesending(arr4);
	cout << endl;
	mergeing(arr1, arr2);
	sortDesending(arr4);
	mergeing(arr3, arr4);
	cout << endl;
	//sortDesending(arrayMerge1);
	//cout << endl;
	//sortDesending(arrayMerge2);

		return 0;
	}


void splitArray(int myArray[])
{

	for (int i = 0; i <= 1; i++) {
		arr1[i] = myArray[i];
	}
	for (int i = 0; i <= 1; i++) {
		arr2[i] = myArray[i+2];
	}
	for (int i = 0; i <= 1; i++) {
		arr3[i] = myArray[i + 4];
	}
	for (int i = 0; i <= 1; i++) {
		arr4[i] = myArray[i + 6];
	}

	/*arr1[0] = myArray[0];
	arr1[1] = myArray[1];
	arr2[0] = myArray[2];
	arr2[1] = myArray[3];
	arr3[0] = myArray[4];
	arr3[1] = myArray[5];
	arr4[0] = myArray[6];
	arr4[1] = myArray[7];*/

	
	for (int j = 0; j < 1; j++)
	{

		cout << "The first array is: " << arr1[j] << ", " << arr1[j + 1] << endl;
		cout << "The second array is: " << arr2[j] << ", " << arr2[j + 1] << endl;
		cout << "The third array is: " << arr3[j] << ", " << arr3[j + 1] << endl;
		cout << "The fourth array is: " << arr4[j] << ", " << arr4[j + 1] << endl;
	}

}



void sortDesending(int theArray[]) {
	//desending order
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 2; j++) {

			if (theArray[j] > theArray[i]) {
				temp1 = theArray[i];
				theArray[i] = theArray[j];
				theArray[j] = temp1;
			}
		}
		//cout << theArray[i] << " ";

	}
}

void mergeing(int myarray1[], int myarray2[])
{
	for (int i = 0; i <= 1; i++) {
		arrayMerge1[i] = myarray1[i];
		arrayMerge1[i + 2] = myarray2[i];
	}


	for (int j = 0; j < 4; j++)
	{

		cout << arrayMerge1[j]<<" ";
		//cout << "The second array is: " << arrayMerge2[j] << endl;
		
	}

}




//cout << endl;
//for (int k = arraySize / 2; k < arraySize; k++) {
//	for (int j = k + 1; j < arraySize; j++) {

//		if (myArray[j] > myArray[k]) {
//			temp2 = myArray[k];
//			myArray[k] = myArray[j];
//			myArray[j] = temp2;
//		}
//	}
//		cout << myArray[k] << " ";
//}





//
//for (int i = 0; i < arraySize / 2; i++) {
//	for (int j = i + 1; j < arraySize / 2; j++) {
//
//		if (myArray[j] > myArray[i]) {
//			temp1 = myArray[i];
//			myArray[i] = myArray[j];
//			myArray[j] = temp1;
//		}
//	}
//	cout << myArray[i] << " ";
//
//}
//
//
//cout << endl;
//for (int k = arraySize / 2; k < arraySize; k++) {
//	for (int j = k + 1; j < arraySize; j++) {
//
//		if (myArray[j] > myArray[k]) {
//			temp2 = myArray[k];
//			myArray[k] = myArray[j];
//			myArray[j] = temp2;
//		}
//	}
//	cout << myArray[k] << " ";
//}
//


