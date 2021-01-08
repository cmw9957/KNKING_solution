struct complex{
	double real;
	double imaginary;
};	//(a)

struct complex c1, c2, c3;	//(b)

struct complex make_complex(double real, double imaginary){
	return (struct complex){real, imaginary};									//compound literal
}	//(c)

struct complex add_complex(struct complex a, struct complex b){
	return (struct complex){a.real + b.real, a.imaginary + b.imaginary};		//compund literal
}	//(d)
