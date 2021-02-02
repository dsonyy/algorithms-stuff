#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
	ifstream dane("__slowa.txt");
	ofstream wynik("2ech_Slowa_Bednorz.txt");
	string slowa[1000];
	int n = 0;
	while (dane >> slowa[n]) n++;
	int zad1 = 0, max = 0, maxi = -1;
	int zad2 = 0;
	int zad3 = 0;
	for (int i = 0; i < n; i++) {
		// zad 1
		int a = 0;
		for (int j = 0; j < n; j++) {
			if (slowa[i] == slowa[j]) {
				a++;
			}
		}
		if (a > max) {
			max = a;
			maxi = i;
		}
		if (a > 1) zad1++;

		// zad 2
		char ch = slowa[i][slowa[i].size() - 1];
		if (ch == 'A' || ch == 'C' || ch == 'E') zad2++;
		
		// zad 3
		string c = slowa[i];
		reverse(c.begin(), c.end());
		if (c == slowa[i]) zad3++;
	}
	
	cout << "A) Slow wystepjacych wiecej niz raz: " << zad1 << endl
	     << "   Slowo o najwiekszej liczbie wystapien: " << slowa[maxi] << endl
	     << "   Liczba jego wystapien: " << max << endl
	     << "B) Liczb parzystych: " << zad2 << endl
	     << "C) Palindromow: " << zad3 << endl;
			  
	wynik << "A) Slow wystepjacych wiecej niz raz: " << zad1 << endl
	      << "   Slowo o najwiekszej liczbie wystapien: " << slowa[maxi] << endl
	      << "   Liczba jego wystapien: " << max << endl
	      << "B) Liczb parzystych: " << zad2 << endl
	      << "C) Palindromow: " << zad3 << endl;
	
	return 0;
}