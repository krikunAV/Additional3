#include "Header.h"
#include <iostream>
#include <windows.h>

using namespace std;
namespace kk {
	void read(char arr[100], int& N)
	{
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
	}

	void change(char arr[100], int N)
	{
		char bukv[33] = { '�', '�', '�', '�', '�', '�',
						'�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
						'�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
						'�', '�', '�', '�', '�', '�', '�' };
		char zaglBukv[33] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
						'�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
						'�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
						'�', '�', '�' };
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < 33; j++) {
				if (arr[i] == bukv[j]) {
					arr[i] = zaglBukv[j];
				}
			}
		}
	}

	void print(char const arr[100], int N)
	{
		for (int i = 0; i < N; i++) {
			cout << arr[i];
		}
	}
}