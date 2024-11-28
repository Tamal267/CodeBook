const int mod = 1000000007;

vector<vector<i64>> multi(vector<vector<i64>> &m1, vector<vector<i64>> &m2) {
	int n = m1.size();
	vector<vector<i64>> res(n, vector<i64>(n, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				res[i][j] = (res[i][j] + (m1[i][k] * m2[k][j]) % mod) % mod;
			}
		}
	}
	return res;
}
 
vector<vector<i64>> power(vector<vector<i64>> &base, int n, int m = mod) {
	int r = base.size();
	vector<vector<i64>> identity(r, vector<i64>(r));
	for (int i = 0; i < r; i++) {
		identity[i][i] = 1;
	}
	while (n > 0) {
		if (n % 2 == 1) {
			identity = multi(base, identity);
		}
		base = multi(base, base);
		n /= 2;
	}
	return identity;
}
