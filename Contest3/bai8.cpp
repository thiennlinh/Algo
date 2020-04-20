#include <bits/stdc++.h>

using namespace std;

int t, n, s[1002], f[10002];

void doicho(int i, int j) {
	int tmp = f[i];
	f[i] = f[j];
	f[j] = tmp;
	tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
}



int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> s[i];
			cin >> f[i];
		}
	}
}
