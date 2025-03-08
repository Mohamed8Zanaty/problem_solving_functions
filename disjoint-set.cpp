int find(int x, int* ds) {
    if(ds[x] == x)
        return x;
    return ds[x] = find(ds[x], ds);
}