#include <iostream>
#include <fstream>

using namespace std;

void countSymbols(int& plusCount, int& minuCount, int& equCount, const char* filename) {
	ifstream fout(filename);
	char s;
	if (!fout) {
		cerr << "Cannot open this file";
		return;
	}
	while (fout >> s) {
		if (s == '-') {
			minuCount++;
		}
		else if (s == '+') {
			plusCount++;
		}
		else if (s == '=') {
			equCount++;
		}
	}
}

int main() {
	char name[] = "readSymbls.txt";
	int minuCount = 0, plusCount = 0, equCount = 0;
	countSymbols(plusCount, minuCount, equCount, name);
	cout << "\nminus symb Count; " << minuCount;
	cout << "\nplus symb Count; " << plusCount;
	cout << "\nequation symb Count; " << equCount;
}