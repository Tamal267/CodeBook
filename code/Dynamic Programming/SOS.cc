void SOS (vector<int> &v) {
	const int BITS = log2(*max_element(v.begin(), v.end())) + 1;
	vector<int> freq(1 << BITS, 0);
	for (int mask : v) freq[mask]++;

	vector<int> dp(1 << BITS);
	for (int mask = 0; mask < 1 << BITS; mask++) {
		dp[mask] = 0;
		int submask = mask;
		do {
			dp[mask] += freq[submask];
			submask = (submask - 1) & mask;
		} while (submask);
	}

	for (int mask : v) cout << dp[mask] << '\n';
}
// If k = number of 1's in the integer n. Then total submask = 2^k.
// 5
// 3 7 2 9 2
// for 3 -> 3, 2, 2 are submasks.
