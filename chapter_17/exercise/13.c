void qsort_mid(void (*q)(void *base, size_t nmeb, size_t size, int (*compare)(const void *, const void *))){
	int mid_size = (int)(nmeb / 2);
	q(base + mid_size - 1, mid_size, sizeof(int), compare_parts);
}

qsort(&a[50], 50, sizeof(a[0]), compare_parts);
