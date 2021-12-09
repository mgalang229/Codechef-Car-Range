#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int p, m, v;
		cin >> p >> m >> v;
		// m - (p - 1) = fuel economoy after subtracting (p - 1) passengers
		// multiply the result to v in order to find the maximum distance
		cout << v * (m - (p - 1)) << '\n';
	}
	return 0;
}
