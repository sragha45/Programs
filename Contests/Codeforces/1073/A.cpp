#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n;
	string a;
	cin >> a;
	bool flag = false;
	for(int i = 1; i < n; i++) {
		if(a[i] != a[i - 1]) {
			cout << "YES\n" << a[i - 1]  << a[i] << endl;
			flag = true;
			break;
		}
	}
	if(!flag) {
		cout << "NO";
	}
}
