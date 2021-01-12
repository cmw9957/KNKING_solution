int sum(int (*f)(int), int start, int end){
	int ans = 0;
	while(start <= end)
		ans += f(start++);
	return ans;
}
