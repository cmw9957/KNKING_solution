//주어진 표현식의 output을 작성

(a)
i = 8; j = 9;
printf("%d", i >> 1 + j >> 1);

//0

(b)
i = 1;
printf("%d", i & ~i);

//0

(c)
i = 2; j = 1; k = 0;
printf("%d", ~i & j ^ k);

//0

(d)
i = 7; j = 8; k = 9;
printf("%d", i ^ j & k);

//15
