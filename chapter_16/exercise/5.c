struct time{
	int hours;
	int minutes;
	int seconds;
};

struct time split_time(long total_seconds){
	return (struct time){.seconds = total_seconds % 60, .minutes = total_seconds / 60 % 60, .hours = total_seconds / 60 / 60};
}
