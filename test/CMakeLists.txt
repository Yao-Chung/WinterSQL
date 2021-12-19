add_executable(unittest
  Table/MemoryTable.cpp
)
target_link_libraries(unittest
  gtest_main
  WinterSQL
)

include(GoogleTest)
gtest_discover_tests(unittest)