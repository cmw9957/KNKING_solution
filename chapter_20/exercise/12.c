//���� �Լ��� unsigned char type�� �� ���� �Է¹޾� unsigned short type�� �� ������ 1byte�� ������ �����ϴ� �Լ��̴�. �� �߸� �Ǿ����� ����.

unsigned short create_short(unsigned char high_byte, unsigned char low_byte){
	return high_byte << 8 + low_byte;
} 

//������ high_byte�� ���� shift �ؾ� �´µ� ������ �켱 ������ + ���� ���� + ���� ������ �Ǿ �� �Լ��� Ʋ�ȴ�. 
