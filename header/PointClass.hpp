#ifndef POINT_CLASS_HPP
#define POINT_CLASS_HPP

class Point2D {
	double x;
	double y;

	public:
		Point2D(double x, double y);							/*	constructor			*/
		virtual ~Point2D();										/*	destructor			*/

		double getX() const;									/*	get position X		*/
		double getY() const;									/*	get position Y		*/
		bool onEqualLocation(Point2D &other) const;				/*	compare two points	*/

	/*	more other functions here...	*/
};

#endif
