template<typename T>
void zeroSort(T* const arr, size_t n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
}

template<typename T>
void zeroSort_r(T* const arr, size_t n) {
    zeroSort(arr, size_t);
}
