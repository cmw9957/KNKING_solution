//���� �־��� ������ �� ���� ��¹��� ������� �ʴ��� ����.

#define SHIFT_BIT 	1
#define CTRL_BIT 	2
#define ALT_BIT 	4

if(key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT) == 0)
	printf("No modifier keys pressed\n");
	
//�� ������ &(AND) �����ڰ� ==(��ȣ)�����ں��� �켱������ ���� ������ �׻� ��¹��� ������ �ʰ� �ȴ�. 
