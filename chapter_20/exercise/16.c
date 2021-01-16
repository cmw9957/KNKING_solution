typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int DWORD;

union {
	struct{
		DWORD eax, ebx, ecx, edx;
	}dword;
	struct{
		WORD ax, dummy_ax, bx, dummy_bx, cx, dummy_cx, dx, dummy_dx,;
	}word;
	struct{
		BYTE al, ah, dummy_al, dummy_al,
			 bl, bh, dummy_bl, dummy_bl, 
		 	 cl, ch, dummy_cl, dummy_cl, 
			 dl, dh, dummy_dl, dummy_dl;
	}byte;
}regs; 
