#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void wypisz(int tab[100], int n) {
	for (int j = 0; j < n; j++) cout << tab[j] << " ";
	cout << endl;
}

int main() {
	srand(time(0));
	int n, k, tab[100];
	cout << "Sortowanie BABELKOWE" << endl;
	cout << "Ile liczb sortowac?: ";
	cin >> n;
	cout << "generowac = 0, czytac = 1: ";
	cin >> k;
	if (k == 0) for (int i = 0; i < n; i++) tab[i] = rand() % 10;
	else for (int i = 0; i < n; i++) cin >> tab[i];
	cout << "Ciag WEJSCIOWY: ";
	wypisz(tab, n);
	cout << endl;
	cout << "-- etapy sortowania:" << endl;
	for (int i = n - 1; i > 0; i--) {
		cout << i << "." << endl;

		for (int j = 1; j <= i; j++) {
			if (tab[j - 1] > tab[j]) {
				int a = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = a;
			}
			cout << "  " << j << ".\t";
			wypisz(tab, n);
		}
	}
	cout << endl << "Ciag POSORTOWANY:\t";
	wypisz(tab, n);
	return 0;
}