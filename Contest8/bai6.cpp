#include <bits/stdc++.h>

using namespace std;

void xuli() {
    int n; cin >> n;
    queue <int> q;
    q.push(9);
    int s1 = q.front();
    q.pop();
    if(s1 % n == 0) {
        cout << s1 << "\n";
    }
    int s2 = s1;

}

int main() {
    int t; cin >> t;
    while(t--) {
        xuli();
    }
    return 0;
}