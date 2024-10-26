void SOS (vector<int> &v) {
	const int BITS = log2(*max_element(v.begin(), v.end())) + 1;
	vector<int> freq(1 << BITS, 0);
	for (int mask : v) freq[mask]++;

	vector<vector<int>> dp(BITS + 1, vector<int> (1 << BITS, 0));
	for (int mask = 0; mask < 1 << BITS; mask++) {
		dp[0][mask] = freq[mask];
	}

	for (int bits = 1; bits <= BITS; bits++) {
		for (int mask = 0; mask < 1 << BITS; mask++) {
			if ((mask & (1 << (bits - 1))) == 0) {
				dp[bits][mask] = dp[bits - 1][mask];
			}
			else {
				int other_mask = mask - (1 << (bits - 1));
				dp[bits][mask] = dp[bits - 1][mask] + dp[bits - 1][other_mask];
			}
		}
	}

	for (int mask : v) cout << dp[BITS][mask] << '\n';
}
// dp[bits][mask] means left most 'bits' of submasks can be differ
// for dp[1][11] 01, 00 are now allow because leftmost 1 bit can be differ. 10 and 11 are allowed.
