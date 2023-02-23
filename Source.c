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
	/// 
	int comparrisonValue1 = 0, comparrisonValue2 = 0, probPosition1 = 0, probPosition2 = 0, lengthofUnorder = sizeOfArray, currentPosInArr = 0, correctAmountsOfElements = 0;
	while (correctAmountsOfElements < lengthofUnorder - 1) { if (currentPosInArr == lengthofUnorder - 1) { correctAmountsOfElements = 0; currentPosInArr = 0; }; probPosition1 = currentPosInArr; probPosition2 = currentPosInArr + 1; comparrisonValue1 = UnorderdArray[probPosition1]; comparrisonValue2 = UnorderdArray[probPosition2]; if (comparrisonValue1 <= comparrisonValue2) { correctAmountsOfElements++; } else if (comparrisonValue1 > comparrisonValue2) { UnorderdArray[currentPosInArr] = comparrisonValue2; UnorderdArray[currentPosInArr + 1] = comparrisonValue1; }currentPosInArr++; };
}

int main() {
	int arrUnorderd[] = { 5,1,4,8,7,9,7,0,8,3,6,2 };
	int lengthOfArr = sizeof(arrUnorderd) / sizeof(int);

	for (int printPosCounter = 0; printPosCounter < lengthOfArr; printPosCounter++)
	{
		printf("%d", arrUnorderd[printPosCounter]);
	}
	printf("\n");

	bubelSortAlgorithem(arrUnorderd, lengthOfArr);

	for (int printPosCounter = 0; printPosCounter < lengthOfArr; printPosCounter++)
	{
		printf("%d", arrUnorderd[printPosCounter]);
	}
	printf("\n");
}