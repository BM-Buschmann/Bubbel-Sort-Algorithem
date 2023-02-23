/*
	Within the following file, we eill explore the workings of an Bubbel sort algorithem.
*/

#include<stdio.h>
#include<stdlib.h>
int bubelSortAlgorithem(int* UnorderdArray, int sizeOfArray) {
	/// <summary>
	/// sorts the arr with the bubbel sort array
	/// </summary>
	/// <param name="UnorderdArray">Pointer to Array with unorder Values</param>
	/// <param name="sizeOfArray"></param>
	/// <returns></returns>

	// initialising all necesary variables
	int comparrisonValue1 = 0;
	int comparrisonValue2 = 0;
	int probPosition1 = 0;
	int probPosition2 = 0;
	int lengthofUnorder = sizeOfArray;
	int currentPosInArr = 0;
	int correctAmountsOfElements = 0;

	// setting up the funktion
	while (correctAmountsOfElements < lengthofUnorder - 1) //loop until all values are in the coorect order
	{ 
		if (currentPosInArr == lengthofUnorder - 1) // if we reached the end of the array go back to the front and start over
		{ 
			correctAmountsOfElements = 0; 
			currentPosInArr = 0; 
		}; 
		probPosition1 = currentPosInArr; // probing position of value one is equal to the cuurrent position of the array
		probPosition2 = currentPosInArr + 1; // probing position two is equal to the current position plus the value one 
		comparrisonValue1 = UnorderdArray[probPosition1];  // getting the value present in the array at the probing position one
		comparrisonValue2 = UnorderdArray[probPosition2];  // getting the value present in the array at the probing position two
		if (comparrisonValue1 <= comparrisonValue2) // check if the first probed value is smaller than the following one 
		{ 
			correctAmountsOfElements++; // if this is the case the values have the correct orrientation if this is the case we add one to the counter
		} 
		else if (comparrisonValue1 > comparrisonValue2) // if the previous condition is not met we swich the two values
		{
			UnorderdArray[currentPosInArr] = comparrisonValue2; // write the second Probe value to the position of previously probe point one
			UnorderdArray[currentPosInArr + 1] = comparrisonValue1; // write the first Probe value to the position of previously probe point two
		}
		currentPosInArr++; // count the current position in the array up by one value 
	};
}

int main() {
	// initialise our variables 
	int arrUnorderd[] = { 5,1,4,8,7,9,7,0,8,3,6,2 }; // create a array with unsorted randome values 
	int lengthOfArr = sizeof(arrUnorderd) / sizeof(int); // calulate the amounts of elements in the array

	// print all values of the original unsorted array  
	for (int printPosCounter = 0; printPosCounter < lengthOfArr; printPosCounter++)
	{
		printf("%d", arrUnorderd[printPosCounter]);
	}
	printf("\n");

	//call ouer bubel sort algorithem
	bubelSortAlgorithem(arrUnorderd, lengthOfArr); // ouer algorthim takes the pointer of our unsorted array and the length of the unsorted array. But does not return anything

	// print all values of the sorted array
	for (int printPosCounter = 0; printPosCounter < lengthOfArr; printPosCounter++)
	{
		printf("%d", arrUnorderd[printPosCounter]);
	}
	printf("\n");
}