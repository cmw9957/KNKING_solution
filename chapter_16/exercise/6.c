struct fraction{
	int num;
	int denom;
};

struct fraction gcd(struct fraction frac){
	int a, b, r;
	a = frac.num;
	b = frac.denom;
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	frac.num /= a;
	frac.denom /= a;
	
	return frac;
}	//(a)

struct fraction add_farction(struct fraction a, struct fraction b){
	struct fraction t;
	t.num = a.num * b.denom + b.num * a.denom;
	t.denom = a.denom * b.denom;
	t = gcd(t);
	
	return t;
}	//(b)

struct fraction sub_fraction(struct fraction a, struct fraction b){
	struct fraction t;
	t.num = a.num * b.denom - b.num * a.denom;
	t.denom = a.denom * b.denom;
	t = gcd(t);
	
	return t;
}	//(c)

struct fraction mul_fraction(struct fraction a, struct fraction b){
	struct fraction t;
	t.num = a.num * b.num;
	t.denom = a.denom * b.denom;
	t = gcd(t);
	
	return t;
}	//(d)

struct fraction div_fraction(struct fraction a, struct fraction b){
	struct fraction t;
	t.num = a.num * b.denom;
	t.denom = a.denom * b.num;
	t = gcd(t);
	
	return t;
}	//(e)
