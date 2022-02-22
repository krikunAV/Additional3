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
		char bukv[33] = { 'é', 'ö', 'ó', 'ê', 'å', 'í',
						'ã', 'ø', 'ù', 'ç', 'õ', 'ú', '¸', 'ô', 'û', 'â',
						'à', 'ï', 'ð', 'î', 'ë', 'ä', 'æ', 'ý', 'ÿ', '÷',
						'ñ', 'ì', 'è', 'ò', 'ü', 'á', 'þ' };
		char zaglBukv[33] = { 'É', 'Ö', 'Ó', 'Ê', 'Å', 'Í', 'Ã', 'Ø', 'Ù', 'Ç',
						'Õ', 'Ú', '¨', 'Ô', 'Û', 'Â', 'À', 'Ï', 'Ð', 'Î',
						'Ë', 'Ä', 'Æ', 'Ý', 'ß', '×', 'Ñ', 'Ì', 'È', 'Ò',
						'Ü', 'Á', 'Þ' };
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