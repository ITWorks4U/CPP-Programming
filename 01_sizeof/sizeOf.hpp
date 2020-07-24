#ifndef SIZEOF_HPP
#define SIZEOF_HPP

/*	empty basic data structures	*/
union UExample {			//	stores a set of members, where the required amount of space
};							//	depends on the biggest data type 		→ see: C progamming tutorial (part 9 / in German)

struct SExample {			//	stores a set of members, where each member get's it's own amount
};							//	of space 								→ see: C progamming tutorial (part 9 / in German)

enum EExample {				//	stores a set of numeric attributes, which are very useful for some
};							//	events e. g. system status or else		→ see: C progamming tutorial (part 8 / in German)

class CExample {			//	new in C++: like a struct it will hold members, where classes are more powerful than
};							//	struct or union							→ more information about a class comes soon

/*	data structures with some examples	*/
union U {
	SExample sEx;
	EExample eex;
	CExample cEx;
};

struct S {
	UExample uEx;
	EExample eEx;
	CExample cEx;
};

enum E {
	A, B, C
};

class C {
	UExample uEx;
	SExample sEx;
	EExample eEx;
};

#endif
