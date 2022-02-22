#include <iostream>
#include "Header.h"
#include <windows.h>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	
	char arr[100];
	int N;
	
	kk::read(arr, N);
	kk::change(arr, N);
	kk::print(arr, N);
}

