#include <bits/stdc++.h>
using namespace std;

#define i64 long long
#define accuracy chrono::steady_clock::now().time_since_epoch().count()

mt19937 rng(accuracy);

int rand(int l, int r) {
  uniform_int_distribution<int> ludo(l, r);
  return ludo(rng);
}

int main() {
  srand(accuracy);
  int t = 1;
  t = rand(1, 10), cout << t << '\n';
  while (t--) {
		// TODO
  }
}

