#include <iostream>
#include <vector>

using namespace std;
long long num1, num2;
int MIN;
int flag;

void run(int le, long long sum) {
	if (sum>=num2) {
		if (sum == num2 && MIN > le) {
			flag = 1;
			MIN = le;
		}

		return;
	}

	for (int i = 0; i < 2; i++) {
		if (i == 0) run(le + 1, sum * 2);
		else run(le + 1, sum * 10 + 1);
	}
}

int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {

		cin >> num1 >> num2;
		
		MIN = 21e8;
		flag = 0;
		run(0,num1);
		
		if (flag == 0) MIN = -1;
		else MIN++;
		cout << "#" << i + 1 << " " << MIN << endl;
	}

	return 0;
}