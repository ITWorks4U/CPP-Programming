#	the CMakeLists.txt from src folder

set(src PointClass.cpp)

include_directories("${PointTester_SOURCE_DIR}/header")

add_library(PointClass ${src})
