//다음 주어진 문장이 왜 절대 출력문을 출력하지 않는지 설명.

#define SHIFT_BIT 	1
#define CTRL_BIT 	2
#define ALT_BIT 	4

if(key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT) == 0)
	printf("No modifier keys pressed\n");
	
//그 이유는 &(AND) 연산자가 ==(등호)연산자보다 우선순위가 낮기 때문에 항상 출력문이 나오지 않게 된다. 
