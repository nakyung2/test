#include <iostream>
#include <vector>

using namespace std;

vector<long long> arr;
int n;
int cnt = 0;
long long sum = 0;

long long run() {
	int s = arr.size();
	int tmp = arr[s - 1];

	for (int i = s-2; i >= 0; i--) {
		if (tmp <= arr[i]) {
			sum += cnt * tmp;
			cnt = 0;
			tmp = arr[i];
			continue;
		}
		sum -= arr[i];
		cnt++;
		if (i == 0) sum += cnt * tmp;
	}

	return sum;
	
}

int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {

		cin >> n;

		arr.clear();
		for (int x = 0; x < n; x++) {
			int num;
			cin >> num;
			arr.push_back(num);
		}

		sum = 0;
		cnt = 0;
		long long result = run();

		cout << "#" << i + 1 << " " << result << endl;
	}

	return 0;
}