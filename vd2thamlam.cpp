#include <bits/stdc++.h>

using namespace std;

int n;
int l[100];

int main() {
	int OPT = 0;
	cin >> n;
	priority_queue<int, vector<int>, greater<int> > pg; // cau truc du lieu hang doi uu tien
	for(int i=0; i<n; i++) {
		int a;
		cin >> a;
		pg.push(a); // day vao hang doi
	}

	while(pg.size() > 1) {
		int first = pg.top(); pg.pop();
		int second = pg.top(); pg.pop();
		OPT += first + second;
		pg.push(first + second);
	}
	cout << OPT;
	return 0;
}
