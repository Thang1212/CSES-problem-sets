//Trailing zero
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin >> n;
	ll ans = 0;
	for (int i = 5; i <= n; i*=5) {
		ans += n / i;
		cout << "ans value: " << ans << "\n";
	}
	cout << ans;
}
