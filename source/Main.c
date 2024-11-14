#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
#define STUDENTS 3
#define EXAMS 4

void inverse(int*); //P30
int linearSearch(const int array[], int key, int size); //P37
void bubbleSort(int array[], int size); //6.11(a)
void optimizedBubbleSort(int array[], int size); //6.11(b)
void printArray(const int a[][3]);
int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);
void staticArrayInit(void);
void automaticArrayInit(void);
void modifyArray(int b[], int size);
void modifyElement(int e);

/*//P04
int main(void)
{
	int n[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		n[i] = 0;
	}

	printf("%s%13s\n", "Element", "Value");

	for (i = 0; i < 10; i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}
	system("pause");
	return 0;
}
*/

/*//P05
int  main(void)
{
	int n[10] = { 32,27,64,18,95,14,95,70,60,37 };
	int i;

	printf("%s%13s\n", "Element", "Value");

	for (i = 0; i < 10; i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}

	system("pause");
	return 0;
}
*/

/*//P06
int main(void)
{
	int s[SIZE];
	int j;

	for (j = 0; j < SIZE; j++)
	{
		s[j] = 2 + 2 * j;
	}

	printf("%s%13s\n", "Element", "Value");

	for (j = 0; j < SIZE; j++)
	{
		printf("%7d%13d\n", j, s[j]);
	}

	system("pause");
	return 0;
}
*/

/*//P07
int main(void)
{
	int a[12] = { 1,3,5,4,7,2,99,16,45,67,89,45 };
	int i;
	int total = 0;

	for (i = 0; i < SIZE; i++)
	{
		total += a[i];
	}

	printf("Total of array element values is %d\n", total);

	system("pause");
	return 0;
}
*/

/*//P08
int  main(void)
{
	int n[SIZE] = { 19,3,15,7,11,9,13,5,17,1 };
	int i;
	int j;

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	for (i = 0; i < SIZE; i++)
	{
		printf("%7d%13d    ", i, n[i]);
		for (j = 1; j <= n[i]; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/


/*//P13
int main(void)
{
	int array1[2][3] = { { 1,2,3 }, { 4,5,6 } };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { { 1,2 }, { 4 } };

	printf("Values in array1 by row are :\n");
	printArray(array1);

	printf("Values in array2 by row are :\n");
	printArray(array2);

	printf("Values in array3 by row are :\n");
	printArray(array3);
	system("pause");
	return 0;
}
*/

/*//P14
int main(void)
{
	int student;
	const int studentGrades[STUDENTS][EXAMS] =
	{
		{77, 68, 86, 73},
		{96, 87, 89, 78},
		{70, 90, 86, 81}
	};

	printf("The array is:\n");
	printArray(studentGrades, STUDENTS, EXAMS);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		minimum(studentGrades, STUDENTS, EXAMS),
		maximum(studentGrades, STUDENTS, EXAMS));

	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, average(studentGrades[student], EXAMS));
	}

	system("pause");
	return 0;
}
*/
 
/*//P19
int main(void)
{
	char string1[20];
	char string2[] = "string literal";
	int i;

	printf("Enter a string: ");
	scanf_s("%s", string1);

	printf("string1 is: %s\nstring2 is: %s\n", string1, string2);
	printf("string1 with spaces between characters is: \n");

	for (i = 0; string1[i] != '\0'; i++)
		printf("%c ", string1[i]);

	printf("\n");
	system("pause");
	return 0;
}
*/

/*//P21
int main(void)
{
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}
*/

/*//P25
void main()
{
	int x = 100;
	int y = addbyone(x);
	system("pause");
}
int addbyone(int& xref)
{
	xref++;
	printf(xref = % d\n",xref);
		return xref;
}
*/

/*//P26
int main(void)
{
	char array[5];
	printf("    array=%p\n&array[0]=%p\n    &array=%p\n", array, &array[0], &array);
	system("pause");
	return 0;
}
*/

/*//P28
int main(void)
{
	int a[SIZE] = { 0,1,2,3,4 };
	int i;

	printf("Effects of passing entire array by reference:\n\nThe values of the original array are:\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d", a[i]);

	printf("\n");

	modifyArray(a, SIZE);
	printf("The values of the modified array are:\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d", a[i]);

	printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3]);

	modifyElement(a[3]);
	printf("The value of a[3] is %d\n", a[3]);

	system("pause");
	return 0;
}
*/

/* P.30
int main()
{
	int a[3] = { 3,5,7 }, i;
	for (i = 0; i < 3; i++)
	{
		printf("%d	", a[i]);
	}
	printf("\n");

	inverse(a);

	for (i = 0; i < 3; i++)
	{
		printf("%d	", a[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
*/

/*P.37
int main(void)
{
	int a[SIZE];
	int x;
	int searchKey;
	int element;

	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}

	printf("Enter integer search key:\n");
	scanf_s("%d", &searchKey);

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1)
	{
		printf("Found value in element %d\n", element);
	}
	else
	{
		printf("Value not found\n");
	}
	system("pause");
	return 0;
}
*/

/*
int main() //6.11(a)
{
	int data[SIZE];
	int i;

	// 初始化隨機數生成器
	srand(time(NULL));

	// 生成隨機數填充陣列
	for (i = 0; i < SIZE; i++) 
	{
		data[i] = rand() % 1000; // 產生 0 到 999 的隨機數
	}

	printf("排序前的陣列：\n");
	for (i = 0; i < SIZE; i++) 
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0) 
		{
			printf("\n");
		}
	}

	// 呼叫冒泡排序函數
	bubbleSort(data, SIZE);

	printf("\n排序後的陣列：\n");
	for (i = 0; i < SIZE; i++) 
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0) 
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
*/


/*
int main() //6.11(b)
{
	int data[SIZE];
	int i;

	// 初始化隨機數生成器
	srand(time(NULL));

	// 生成接近排序的陣列
	for (i = 0; i < SIZE; i++) 
	{
		data[i] = i;
	}

	// 打亂少量元素，模擬接近排序的情況
	for (i = 0; i < 5; i++) 
	{
		int index1 = rand() % SIZE;
		int index2 = rand() % SIZE;
		int temp = data[index1];
		data[index1] = data[index2];
		data[index2] = temp;
	}

	printf("排序前的陣列：\n");
	for (i = 0; i < SIZE; i++) 
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0) 
		{
			printf("\n");
		}
	}

	// 呼叫改進的冒泡排序函數
	optimizedBubbleSort(data, SIZE);

	printf("\n排序後的陣列：\n");
	for (i = 0; i < SIZE; i++) 
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0) 
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
*/

void inverse(int* b) //P.30
{
	int tmp[3], i;
	for (i = 0; i < 3; i++)
		tmp[2 - i] = b[i];
	for (i = 0; i < 3; i++)
		b[i] = tmp[i];
}

int linearSearch(const int array[], int key, int size) //P.37
{
	int n;
	for (n = 0; n < size; ++n)
	{
		if (array[n] == key)
		{
			return n;
		}
	}
	return -1;
}

void bubbleSort(int array[], int size) //6.11(a)
{
	int i, j, temp;
	for (i = 0; i < size - 1; i++) 
	{
		// 每次迭代，內層循環的範圍減少
		for (j = 0; j < size - 1 - i; j++) 
		{
			if (array[j] > array[j + 1]) 
			{
				// 交換元素
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void optimizedBubbleSort(int array[], int size) //6.11(b)
{
	int i, j, temp;
	int swapped;
	for (i = 0; i < size - 1; i++) 
	{
		swapped = 0; // 初始化交換標誌
		for (j = 0; j < size - 1 - i; j++) 
		{
			if (array[j] > array[j + 1]) 
			{
				// 交換元素
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; // 標記發生交換
			}
		}
		if (swapped == 0) 
		{
			// 如果沒有交換，提早結束排序
			break;
		}
	}
}

/*
void printArray(const int a[][3])
{
	int i;
	int j;

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
*/

void printArray(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;

	printf("\n\t\t[0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d] ", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}
int minimum(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;
	int lowGrade = 100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}

	return lowGrade;
}
int maximum(const int grades[][EXAMS], int pupils, int tests)
{
	int i;
	int j;
	int highGrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}

	return highGrade;
}
double average(const int setOfGrades[], int tests)
{
	int i;
	int total = 0;

	for (i = 0; i < tests; i++)
	{
		total += setOfGrades[i];
	}
	return(double)total / tests;
}

void staticArrayInit(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i]);

	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d ", i, array1[i] += 5);
}

void automaticArrayInit(void)
{
	int array2[3] = { 1, 2, 3 };
	int i;

	printf("\n\nValues on entering automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d ", i, array2[i]);

	printf("\nValues on exiting automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d ", i, array2[i] += 5);
}

void modifyArray(int b[], int size)
{
	int j;

	for (j = 0; j < size; j++)
		b[j] *= 2;
}

void modifyElement(int e)
{
	printf("Value in modifyElement is %d\n", e *= 2);
}
