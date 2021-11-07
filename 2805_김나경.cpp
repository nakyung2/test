#include <iostream>
#include <vector>

using namespace std;

int map[50][50];
int n;
int sum;

void run() {
	int joo = n / 2;
	int m = 0;

	for (int i = 0; i < n; i++) {
		for (int j = joo - m; j <= joo + m; j++) {
			sum += map[i][j];
		}
		if (i < joo) m++;
		else m--;
	}
}

int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;

		sum = 0;
		for (int x = 0; x < n; x++) {
			string st;
			cin >> st;
			for (int y = 0; y < n; y++) {
				map[x][y] = st[y] - '0';
			}
		}

		run();

		cout << "#" << i + 1 << " " << sum << endl;
	}

	return 0;
}