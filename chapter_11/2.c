// section 5.8을 함수와 포인터를 이용한 프로그램으로 수정

#include<stdio.h>

void find_closet_flight(int, int *, int *);

int main(void){
	int h, m, user_time, departure, arrival;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	
	user_time = h * 60 + m;
	
	printf("Closet departure is ");
	find_closet_flight(user_time, &departure, &arrival);
	
	if(departure <= 583)
		printf("%d:%02d a.m., arriving at %d:%02d a.m.\n", departure / 60, departure % 60, arrival / 60, arrival % 60);
	else if(departure <= 679)
		printf("%d:%02d a.m., arriving at %d:%02d p.m.\n", departure / 60, departure % 60, arrival / 60, arrival % 60);
	else
		printf("%d:%02d p.m., arriving at %d:%02d p.m.\n", departure / 60, departure % 60, arrival / 60, arrival % 60);
	return 0;
}  

void find_closet_flight(int desired_time, int *departure_time, int *arrival_time){
	int d1 = 480, d2 = 583, d3 = 679, d4 = 767, d5 = 840, d6 = 945, d7 = 1140, d8 = 1305,
		a1 = 616, a2 = 712, a3 = 811, a4 = 900, a5 = 968, a6 = 1075, a7 = 1280, a8 = 1438;
		
	if (desired_time <= d1 + (d2 - d1) / 2){
		*departure_time = 480;
		*arrival_time = 616;
	}
    else if (desired_time < d2 + (d3 - d2) / 2){
    	*departure_time = 583;
		*arrival_time = 712;
	}
        
    else if (desired_time < d3 + (d4 - d3) / 2){
    	*departure_time = 679;
		*arrival_time = 811;
	}
        
    else if (desired_time < d4 + (d5 - d4) / 2){
    	*departure_time = 767;
		*arrival_time = 900;
	}
        
    else if (desired_time < d5 + (d6 - d5) / 2){
    	*departure_time = 840;
		*arrival_time = 968;
	}
        
    else if (desired_time < d6 + (d7 - d6) / 2){
    	*departure_time = 945;
		*arrival_time = 1075;
	}
        
    else if (desired_time < d7 + (d8 - d7) / 2){
    	*departure_time = 1140;
		*arrival_time = 1280;
	}
        
    else{
    	*departure_time = 1305;
		*arrival_time = 1438;
	}
}
