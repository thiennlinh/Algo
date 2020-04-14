#include <bits/stdc++.h>

using namespace std;

void sang(int n) {
	bool ok[100000] = {false};
	for(int i=2; i <= sqrt(n); i++) {
		if(!ok[i]){
			for(int j=i*i; j<=n; j+=i) { // buoc nhay o day phai la i la boi so cua i
				ok[j] = true;
			}	
		}
	}
	for(int i=2; i <=n; i++) {
		if(!ok[i])
			cout << i << " ";	
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		sang(n);
		cout << "\n";
		cout << "\n";
	}
	return 0;	
}
