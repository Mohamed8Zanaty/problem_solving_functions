int find(int x, int* ds) {
    return ds[x] == x ? x : ds[x] = find(ds[x], ds);
}