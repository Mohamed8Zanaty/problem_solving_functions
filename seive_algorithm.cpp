int const n = 2 * 1e5 + 5;
int spf[n];

void sieve() {
    spf[0] = spf[1] = 1;
    for (int i = 2; i < n; i++) {
        spf[i] = i;
    }
    for (int i = 4; i < n; i += 2) {
        spf[i] = 2;
    }
    for (int i = 3; i * i < n; i += 2) {
        if (spf[i] == i) {
            for (int j = i * i; j < n; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}