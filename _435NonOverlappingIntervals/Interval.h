#ifndef _435NONOVERLAPPINGINTERVALS_INTERVAL_H
#define _435NONOVERLAPPINGINTERVALS_INTERVAL_H

struct Interval{
	int start;
	int end;
	Interval():start(0), end(0){}
	Interval(int s, int e):start(s), end(e){}
};

#endif 
