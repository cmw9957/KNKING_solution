#define RECTANGLE 0
#define CIRCLE 1
#define PI 3.141582
struct point{
	int x, y;
};

struct shape{
	int shape_kind;
	struct point center;
	union{
		struct{
			int height, width;
		}rectangle;
		struct{
			int radius;
		}circle;
	}u;
}s;

double compute_area(struct shape h){
	if(h.shape_kind == RECTANGLE)
		return h.u.rectangle.height * h.u.rectangle.width;
	else
		return h.u.circle.radius * h.u.circle.radius * PI;
}	//(a)

struct shape move(struct shape s, int x, int y){
	s.center.x += x;
	s.center.y += y;
	
	return s;
}	//(b)

struct shape shape_scale(struct shape s, double c) {
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    } else
        s.u.circle.radius *= c;
    return s;
}	//(c)
