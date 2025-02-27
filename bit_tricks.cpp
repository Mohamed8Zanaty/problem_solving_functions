bool gitBit(int n, int index) {
    return n & (1 << index);
}
int setBit(int n, int index) {
    return n | (1 << index);
}
int clearBit(int n, int index) {
    return n & ~(1 << index);
}
int toggleBit(int n, int index) {
    return n ^ (1 << index);
}
int clearFirstSetBit(int n) {
    return n & (n-1);
}
int lowestSetBit(int n) {
    return n & (-n);
}
int isPowerOf2(int n) {
    return n && !(n & (n-1));
}