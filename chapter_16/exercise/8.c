struct color{
	int red;
	int green;
	int blue;
};	//(a)


struct color make_color(int red, int green, int blue){
	if(red < 0) red = 0;
	else if(red > 255) red = 255;
	if(green < 0) green = 0;
	else if(green > 255) green = 255;
	if(blue < 0) blue = 0;
	else if(blue > 255) blue = 255;
	
	return (struct color){.red = red, .green = green, .blue = blue};
};	//(b)

int getRed(struct color c){
	return c.red;
}	//(c)

bool equal_color(struct color c1, struct color c2){
	if(c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue) return true;
	
	return (c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue);
}	//(d)

struct color brighter(struct color c){
	if(c.blue == 0 && c.green == 0 && c.red == 0)
		return (struct color){.red = 3, .green = 3, .blue = 3};
		
	if(c.blue > 0 && c.blue < 3) c.blue = 3;
	if(c.red > 0 && c.red < 3) c.red = 3;
	if(c.green > 0 && c.green < 3) c.green = 3;
	
	c.blue = (int)c.blue / 0.7;
	c.green = (int)c.green / 0.7;
	c.red = (int)c.red / 0.7;
	
	if(c.blue > 255) c.blue = 255;
	if(c.green > 255) c.green = 255;
	if(c.red > 255) c.red = 255;
	
	return c;
}	//(e)

struct color darker(struct color c){
	c.red = (int)c.red * 0.7;
	c.green = (int)c.green * 0.7;
	c.blue = (int)c.blue * 0.7;
	
	return c;
}	//(f)
