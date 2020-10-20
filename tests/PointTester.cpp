#include "gtest/gtest.h"
#include "PointClass.hpp"

/*	positive tests	*/
TEST(Point2D, CreateTwoPoints) {
	Point2D *firstPoint = new Point2D(1.3, 2.0);
	Point2D *secondPoint = new Point2D(5.0, 3.7);

	EXPECT_TRUE(firstPoint != nullptr);
	EXPECT_TRUE(secondPoint != nullptr);

	delete secondPoint;
	delete firstPoint;
}

TEST(Point2D, PointsMustBeEqual) {
	Point2D firstPoint(3.0, 4.0);
	Point2D secondPoint(3.0, 4.0);

	EXPECT_TRUE(firstPoint.onEqualLocation(secondPoint));
}

/*	negative tests	*/
TEST(Point2D, CreationMustFail) {
	Point2D *firstPoint = nullptr;

	EXPECT_NE(firstPoint, nullptr);

	delete firstPoint;
}

TEST(Point2D, PointsAreUnequal) {
	Point2D firstPoint(1.3, 2.0);
	Point2D secondPoint(5.0, 3.7);

	EXPECT_FALSE(firstPoint.onEqualLocation(secondPoint));
}
