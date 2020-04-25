#include <bits/stdc++.h>

using namespace std;

int t, n, s[1004], f[1004];

void nhap() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> s[i];
		cin >> f[i];
	}
}

void doicho(int i, int j) {
	int tmp = f[i];
	f[i] = f[j];
	f[j] = tmp;
	tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
}

void sapxep(int arr[], int start, int end) {
	if(start >= end) {
		return;
	}
	int vt = rand() % (start-end) + start;
	int pivot = arr[vt];
	int k = start - 1;
	swap(vt, end);
	for (int i = start; i < end; i++) {
		if(arr[i] < pivot)
			k++;
			doicho(i, k);
	}
	doicho(k, end);
	sapxep(arr, start, k-1);
	sapxep(arr, k+1, end);
}

void xuli() {
	int opt = 1;
	int end = f[0];
	for (int i = 1; i < n; i++) {
        if (f[i] == end)
            continue;
        if (s[i] >= end) { //dk dung
            opt++;
            end = f[i];
        }    
    }
    cout << opt << "\n";
}

int main() {
	cin >> t;
	while(t--) {
		nhap();
		sapxep(f, 0, n-1);
		xuli();
	}	
	return 0;
}
