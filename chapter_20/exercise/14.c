//IEEE floating-point standard�� ���� float value�� ������ ����ü�� �̿��� ǥ��.

struct float_point{
	unsigned int fraction : 23;
	unsigned int exponent : 8;
	unsigned int sign : 1;
}; 
