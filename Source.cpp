#include <stdio.h>

#include <locale.h>

#include <stdlib.h>

#include <windows.h>

int main() 
{ 
setlocale(LC_ALL, "Russian"); 
int A = 0, N = 0, k = 0; 

printf("������� �����.\n"); 
scanf_s("%d", &A); 

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