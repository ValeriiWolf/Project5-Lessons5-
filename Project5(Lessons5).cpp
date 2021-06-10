
#include <iostream>
#include <cstdlib>

void PrintArrayDouble(double *arr, size_t size)  //  Функция для печати double массива
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
}

double* InitArrayDouble(double *arr, size_t size)  //  Функция заполнения массива double
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 1.09721 +rand() % 10;
	}
	return arr;
}

void PrintArrayInt(int *arr, size_t size)	//  Функция для печати int массива
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int* ReversIntArrayInt(int *arr2, size_t size)	//  Функция замены числа
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr2[i] == 1)
		{
			arr2[i] = 0;
		}
		else 
		{
			arr2[i] = 1;
		}
	}
	return arr2;
}

void InitArrayStep(int *arr, size_t size);	//Прототип функции для 3 задания

int main()
{
	std::cout << "Work item1" << std::endl;
	const int size = 8;
	double arr1[size];
	//InitArrayDouble(arr1, size);
	//PrintArrayDouble(arr1, size);
	PrintArrayDouble(InitArrayDouble(arr1, size), size);

	std::cout << "Work item2" << std::endl;
	const unsigned int SIZE = 8;
	int Arr2[SIZE] = {0,1,0,1,1};
	PrintArrayInt(Arr2, SIZE);
	ReversIntArrayInt(Arr2, SIZE);
	PrintArrayInt(Arr2, SIZE);

	std::cout << "Work item3" << std::endl;
	int Arr3[SIZE] = {0};
	InitArrayStep(Arr3, SIZE);
	std::cout << std::endl ;
}

void InitArrayStep(int* arr, size_t size)
{	
	int nach = 1;
	const unsigned int STEP = 3;
	for (size_t i = 0; i < size; nach = nach + STEP)
	{
		arr[i] = { nach };
		std::cout << arr[i] << " ";
		i++;
	}
}