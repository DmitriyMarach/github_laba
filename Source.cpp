#include <stdio.h>

#include <locale.h>

#include <stdlib.h>

#include <windows.h>



int main(int argc, char*argv[])

{

	setlocale(LC_ALL, "Russian");

	int A = 0, N = 0, k = 0;


	printf("������� �����.\n");

	A = atoi(argv[1]);


	for (N = 2; N < A; N++)

	{

		if (A % N == 0)

			k++;

	}


	if (k > 0)

		printf("����� %d �� �������� �������.", A);

	else printf("����� %d �������� �������.", A);


	_getch();

}

