/*
	Namespaces allows you to define a special area, which contains anything.
	This can be data structures (union, struct, class, enum),
	functions, variables, constants, ...

	The biggest advantage is that you can define anything, which might already exist
	anywhere outside of the current namespace.

	You can also define namespace(s) within a namespace, like:
	namespace <name_1> {
		namespace <name_1_1> {
			namespace <name_2> {
				.......
			}
		}

		namespace <name_1_2> {
			....
		}
	}
*/

/*	define a namesapce	*/
namespace any_name_here {
	/*
		looks similar to a data structure, whereas
		the namespace area don't need a semicolon at the end
	*/
}

/*	using the certain namespace	#1	*/
using namespace any_name_here;

/*	using the certain namespace	#2	*/
any_name_here::<access to whatever you want>

/*
	You can also add anything into your namespace by "redefining" your namespace,
	however, this works only in another source file, which is part of the project.
	Often used between header and source file(s).
*/
namespace any_name_here {
	/*	Won't work here, because your namespace is already defined in this source file.	*/
}