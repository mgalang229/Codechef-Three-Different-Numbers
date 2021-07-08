#include <bits/stdc++.h>

using namespace std;

const int inf = (int) 1e9 + 7;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a[3];
		cin >> a[0] >> a[1] >> a[2];
		// sort the 3 numbers in non-decreasing order
		sort(a, a + 3);
		// use the permutation rule
		cout << (a[0] % inf) * ((a[1] - 1) % inf) % inf * ((a[2] - 2) % inf) % inf << '\n';
	}
	return 0;
}
