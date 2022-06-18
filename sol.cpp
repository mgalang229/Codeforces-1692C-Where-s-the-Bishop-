#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
	int n = 8;
	vector<vector<char>> a(n, vector<char>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	pair<int, int> p = {-1, -1};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == '#') {
				int cnt = 0;
				
				if (i - 1 >= 0) {
					if (j - 1 >= 0) {
						if (a[i - 1][j - 1] == '#') {
							cnt++;
						}
					}
					
					if (j + 1 < n) {
						if (a[i - 1][j + 1] == '#') {
							cnt++;
						}
					}
				}
				
				if (i + 1 < n) {
					if (j - 1 >= 0) {
						if (a[i + 1][j - 1] == '#') {
							cnt++;
						}
					}
					
					if (j + 1 < n) {
						if (a[i + 1][j + 1] == '#') {
							cnt++;
						}
					}
				}
				
				if (cnt == 4) {
					p = make_pair(i + 1, j + 1);
					break;
				}
			}
		}
		
		if (p.first != -1 && p.second != -1) {
			break;
		}
	}
	
	cout << p.first << " " << p.second << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
	
	return 0;
}
