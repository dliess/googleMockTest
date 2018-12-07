cmake_minimum_required (VERSION 2.8.11)
project (MyGMockTestProject)

set (CMAKE_CXX_STANDARD 11)

# Locate GTest
find_package(GTest REQUIRED)
#find_package(GMock REQUIRED)

add_subdirectory(Shapes)

add_executable(MyGMockTest main.cpp /usr/src/googletest/googlemock/src/gmock-all.cc)
target_include_directories(MyGMockTest PRIVATE "${GTEST_INCLUDE_DIRS}" "/usr/src/googletest/googlemock/include" "/usr/src/googletest/googlemock")
message(STATUS "{GTEST_INCLUDE_DIRS}  ${GTEST_INCLUDE_DIRS}")

target_link_libraries(MyGMockTest shapes moc_shapes ${GTEST_LIBRARIES} pthread)
