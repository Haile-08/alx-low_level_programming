#ifndef HEADER_SEARCH_ALGO
#define HEADER_SEARCH_ALGO

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#define min(a,b) (((a)<(b))?(a):(b))

#endif
