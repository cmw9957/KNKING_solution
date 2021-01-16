//다음 함수는 unsigned char type의 두 수를 입력받아 unsigned short type의 한 정수에 1byte씩 나눠서 저장하는 함수이다. 왜 잘못 되었는지 설명.

unsigned short create_short(unsigned char high_byte, unsigned char low_byte){
	return high_byte << 8 + low_byte;
} 

//이유는 high_byte를 먼저 shift 해야 맞는데 연산자 우선 순위가 + 보다 낮아 + 먼저 연산이 되어서 위 함수는 틀렸다. 
