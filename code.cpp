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

void Palindrom(char[]);


int main()
{

	puts("Enter string:");
	gets_s(s);
	cout << endl << endl;
	Palindrom(s);
	_getch();
	return 0;
}
void Palindrom(char str[]) {
	int amount = 0;
	char *delimiter = " ";
	char *p, *t;
	bool b;
	p = strtok_s(str, delimiter, &t);
	while (p != NULL) {
		int l = strlen(p);
		for (int j = 0; j < l / 2; j++) {
			if (tolower(p[j]) == tolower(p[l - 1 - j])) {
				b = true;
			}
			else {
				b = false;
				break;
			}
		}

		if (b) {
			amount++;
			cout << amount << ") " << p << endl;
		}

		p = strtok_s(NULL, delimiter, &t);
	}
	cout << "Amount of Palindroms: " << amount;
}