//4번 문제에 대해 r, g, b 값을 각각 반환하는 매크로를 작성한다.

#define GET_RED(x) ((x) & 0xff)

#define GET_GREEN(x) ((x) >> 8 & 0xff)

#define GET_BLUE(x)	((x) >> 16 & 0xff)
