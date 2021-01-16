//IEEE floating-point standard에 따른 float value의 구성을 구조체를 이용해 표현.

struct float_point{
	unsigned int fraction : 23;
	unsigned int exponent : 8;
	unsigned int sign : 1;
}; 
