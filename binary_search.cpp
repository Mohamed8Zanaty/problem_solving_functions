#include "includes.h"
template <class T> int binary_search(int l, int r, vector<T> arr, T target) {
    int mid = (l + r) / 2;
    if (l > r) return -1;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binary_search(mid + 1, r, arr, target);
    return binary_search(l, mid - 1, arr, target);
    return -1;

}