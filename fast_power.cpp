int power(int b, int p) {
    if(!p) return 1;
    if(p == 1) return b;

    int ret = power(b, p/2);
    ret *= ret;
    if(p % 2) ret *= p;
    return ret;
}