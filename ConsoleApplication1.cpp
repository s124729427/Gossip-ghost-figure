// ConsoleApplication1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	
	int a;
	int z;
	int x;
	int y;
	int q;
	int w;
	int temp;
	char e;
	int P[8][5] = { 0 };
	
	for (x = 0; x < 16; x++) {
			cin >> q;
			cin >> w;
			cin >> e;
			if (e == 'v') {
				y = 0;
			}
			else if (e == 'u') {
				y = 1;
			}
			else if (e == 't') {
				y = 2;
			}
			else if (e == 's') {
				y = 3;
			}
			else {
				y = 4;
			}
			P[q-1][y] = w;
			temp = q;
			q = w;
			w = temp;
			P[q-1][y] = w;
	}
	
	
	
	

	for (int i = 0; i < 8; i++) {
		int g = i;
		for (a = 0; a < 5; a++) {
			z = i;
			if (P[i][a] != 0)
			{
				
				i = P[i][a] - 1;
			}
		}
		if(P[z][a - 1]==0){
			switch (z)
			{
			case 0:
				cout << g + 1 << "�����ɪ��ҽX��A�C\n";
				break;
			case 1:
				cout << g + 1 << "�����ɪ��ҽX��B�C\n";
				break;
			case 2:
				cout << g + 1 << "�����ɪ��ҽX��C�C\n";
				break;
			case 3:
				cout << g + 1 << "�����ɪ��ҽX��D�C\n";
				break;
			case 4:
				cout << g + 1 << "�����ɪ��ҽX��E�C\n";
				break;
			case 5:
				cout << g + 1 << "�����ɪ��ҽX��F�C\n";
				break;
			case 6:
				cout << g + 1 << "�����ɪ��ҽX��G�C\n";
				break;
			case 7:
				cout << g + 1 << "�����ɪ��ҽX��H�C\n";
				break;
			}
		}
		else
		{
			switch (P[z][a - 1]-1)
			{
			case 0:
				cout << g + 1 << "�����ɪ��ҽX��A�C\n";
				break;
			case 1:
				cout << g + 1 << "�����ɪ��ҽX��B�C\n";
				break;
			case 2:
				cout << g + 1 << "�����ɪ��ҽX��C�C\n";
				break;
			case 3:
				cout << g + 1 << "�����ɪ��ҽX��D�C\n";
				break;
			case 4:
				cout << g + 1 << "�����ɪ��ҽX��E�C\n";
				break;
			case 5:
				cout << g + 1 << "�����ɪ��ҽX��F�C\n";
				break;
			case 6:
				cout << g + 1 << "�����ɪ��ҽX��G�C\n";
				break;
			case 7:
				cout << g + 1 << "�����ɪ��ҽX��H�C\n";
				break;
			}
		}
		i = g;
	}
	system("pause");
    return 0;
}

