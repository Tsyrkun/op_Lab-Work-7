// Lab_7.cpp: определяет точку входа для консольного приложения.
//

#include "targetver.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <tchar.h>
using namespace std;

char s[100];
const int n = 20;
typedef char Array[n][n];

int Words(char[], Array);
void Palindrom(Array, int);


int main()
{
	Array arr;
	int i = 0;
	puts("Enter string:");
	gets_s(s);
	cout << endl << endl;
	i = Words(s, arr);
	Palindrom(arr, i);

	_getch();
    return 0;
}

