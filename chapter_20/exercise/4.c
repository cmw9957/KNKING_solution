//rgb 3개의 type이 long 인 값을 받아 하나의 긴 정수값을 반환하는 매크로를 작성한다. 마지막 3개의 바이트는 r g b 순이다.

#define MK_COLOR(r, g, b)((long) ((b) << 16 | (g) << 8 | (r)))
