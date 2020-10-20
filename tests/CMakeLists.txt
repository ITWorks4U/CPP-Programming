#	the CMakeLists.txt from the tests folder

set(src main.cpp PointTester.cpp)

add_executable(PointTester ${src})

include_directories("${PointTester_SOURCE_DIR}/header")

#	link with googletest libraries as well as "PointTester"
target_link_libraries(PointTester gtest)
target_link_libraries(PointTester gtest_main)
target_link_libraries(PointTester PointClass)					#	→ if you need help: look at src/CMakeLists.txt line 7

#	command(s) for makefile
add_test(
	NAME first_google_test
	COMMAND build/tests/PointTester
	WORKING_DIRECTORY ${PointTester_SOURCE_DIR})
