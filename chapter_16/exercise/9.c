struct point{
	int x, y;
};

struct rectangle{
	struct point upper_left, lower_right;
};
int area_rectangle(struct rectangle r){
	return (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
}	//(a)

struct point center(struct rectangle r){
	return (struct point){((r.lower_right.x - r.upper_left.x) / 2), ((r.upper_left.y - r.lower_right.y) / 2)};
}

struct rectangle move(struct rectangle r, struct point x, struct point y){
	r.lower_right.x += x;
	r.lower_right.y += y;
	
	r.upper_left.x += x;
	r.upper_left.y += y;
	
	return r;
}

bool point_on_rec(struct rectangle r, int x, int y){
	return ((x < r.upper_left.x || x > r.lower_right.x) && (y < r.lower_right.y || y > r.upper_left.y));
}
