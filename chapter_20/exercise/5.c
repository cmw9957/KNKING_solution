//4�� ������ ���� r, g, b ���� ���� ��ȯ�ϴ� ��ũ�θ� �ۼ��Ѵ�.

#define GET_RED(x) ((x) & 0xff)

#define GET_GREEN(x) ((x) >> 8 & 0xff)

#define GET_BLUE(x)	((x) >> 16 & 0xff)
