template<typename T>
void naturalSort(T* const arr, size_t n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
}

template<typename T>
void naturalSort_r(T* const arr, size_t n) {
    for (int i = 0; i < n; i++) {
        arr[i] = (n - 1) - i;
    }
}
