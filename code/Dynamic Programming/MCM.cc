ans = min(ans, MCM(i, k) + MCM(k + 1, j) + v[i - 1] * v[k] * v[j]);
