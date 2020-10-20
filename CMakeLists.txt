#	CMakeLists.txt from the main folder;
#	it contains the subdirectories with their own
#	CMakeLists.txt and their own settings

cmake_minimum_required(VERSION 3.1)				#	minimum required CMAKE version
project(PointTester)							#	name of the project

enable_testing()								#	let googletest allow to test the application

add_subdirectory(src)							#	sub directories to use
add_subdirectory(libs)
add_subdirectory(tests)
