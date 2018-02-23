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
void sortDesending(int theArray[]); // decsending orde sort 2 numbers
void sortDesending4(int theArray[]); // decsending orde sort 4 nunbers
void sortDesending8(int theArray[]); // decsending orde sort 8 numbers
int arrayMerge1[4];
int arrayMerge2[4];
void mergeing(int myarray1[], int myarray2[], int myarray3[], int myarray4[]);
void mergeingFinal(int myarray1[], int myarray2[]);




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
	cout <<"The first sorted array of 2 is: ";
	sortDesending(arr1);
	cout << endl;
	cout << "The second sorted array of 2 is: ";
	sortDesending(arr2);
	cout << endl;
	cout << "The third sorted array of 2 is: ";
	sortDesending(arr3);
	cout << endl;
	cout << "The fourth sorted array of 2 is: ";
	sortDesending(arr4);
	cout << endl;
	cout << "The first 2 arrays merged togther: ";
	mergeing(arr1, arr2, arr3, arr4);
	cout << endl;
	cout << "The first sorted array of 4 is: ";
	sortDesending4(arrayMerge1);
	cout << endl;
	cout << "The second sorted array of 4 is: ";
	sortDesending4(arrayMerge2);
	cout << endl;
	cout << "The final merging of the 2 arrays of 4 is: ";
	mergeingFinal(arrayMerge1, arrayMerge2);
	cout << endl;
	cout << "The final sorted array of 8 is: ";
	sortDesending8(myArray);
	cout << endl;
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
	cout << theArray[i] << " ";

	}
}


void sortDesending4(int theArray[]) {
	//desending order
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {

			if (theArray[j] > theArray[i]) {
				temp1 = theArray[i];
				theArray[i] = theArray[j];
				theArray[j] = temp1;
			}
		}
		cout << theArray[i] << " ";

	}
}



void sortDesending8(int theArray[]) {
	//desending order
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {

			if (theArray[j] > theArray[i]) {
				temp1 = theArray[i];
				theArray[i] = theArray[j];
				theArray[j] = temp1;
			}
		}
		cout << theArray[i] << " ";

	}
}


void mergeing(int myarray1[], int myarray2[], int myarray3[], int myarray4[])
{
	//int mergingArray[4];

	for (int i = 0; i <= 1; i++) {
		arrayMerge1[i] = myarray1[i];
		arrayMerge1[i + 2] = myarray2[i];
		arrayMerge2[i] = myarray3[i];
		arrayMerge2[i + 2] = myarray4[i];
	}


	for (int j = 0; j < 4; j++)
	{

		cout << arrayMerge1[j]<<" ";
		
		
	}
	cout<< endl;
	cout << "The last 2 arrays merged togther: ";
	for (int j = 0; j < 4; j++)
	{

		cout << arrayMerge2[j] << " ";
		

	}


}




void mergeingFinal(int myarray1[], int myarray2[])
{
	//int mergingArray[4];

	for (int i = 0; i <= 8; i++) {
		myArray[i] = myarray1[i];
		myArray[i + 1] = myarray2[i];

	}


	for (int j = 0; j < 8; j++)
	{

		cout << arrayMerge1[j] << " ";
		


	}


}

