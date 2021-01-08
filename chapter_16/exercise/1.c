struct {
	double real;
	double imagimary;
}c1 = {.real = 0.0, .imaginary = 1.0}, c2 = {.real = 1.0, .imaginary = 0.0}, c3;	//(a), (b)

c1 = c2	//(c)

c3.real = c1.real + c2.real;

c3.imagimary = c1.imagimary + c2.imagimary; //(d)
