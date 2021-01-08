struct date{
	int month;
	int day;
	int year;
};	//(a)

int day_of_year(struct date d){
	int sum = 0;
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
	
	if(d.year % 100 != 0 || d.year % 400 == 0 && d.year % 4 == 0)	//À±³â °è»ê
		days[1]++;
	
	for(int i = 0;i < d.month - 1;i++)
		sum += days[i];
	
	return sum + d.day;
}	//(b)

int compare_dates(struct date d1, struct date d2){
	int d1_days = day_of_year(d1);
	int d1_days = day_of_year(d2);
	
	if(d1 < d2)
		return -1;
	else if(d1 > d2)
		return 1;
	else
		return 0;
}
