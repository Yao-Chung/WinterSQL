enable_testing()

add_executable(unittest
  test.cpp
)
target_link_libraries(unittest
  gtest_main
  WinterSQL
)

include(GoogleTest)
gtest_discover_tests(unittest)