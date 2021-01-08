typedef struct _complex{
	double real;
	double imaginary;
}Complex;	//(a)

Complex c1, c2, c3;	//(b)

Complex make_complex(double real, double imaginary){
	return (Complex){real, imaginary};									//compound literal
}	//(c)

Complex add_complex(Complex a, Complex b){
	return (Complex){a.real + b.real, a.imaginary + b.imaginary};		//compund literal
}	//(d)
