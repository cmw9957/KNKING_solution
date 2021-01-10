void print_part(struct part *p){
	pritnf("Part number: %d\n", p->number);
	pritnf("Part name: %s\n", p->name);
	printf("Quantity on hand: %d\n", p->on_hand);
}
