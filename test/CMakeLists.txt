add_executable(${PROJECT_NAME}.test
  AllTests.cpp
  tests.cpp)

if(UNIX)
  target_link_libraries(${PROJECT_NAME}.test
      ${PROJECT_NAME} gtest pthread)
else()
  target_link_libraries(${PROJECT_NAME}.test
      ${PROJECT_NAME} gtest)
endif()

target_compile_definitions(${PROJECT_NAME}.test 
  PRIVATE TEST_DIR="${CMAKE_CURRENT_LIST_DIR}/test")

install(TARGETS ${PROJECT_NAME}.test
        DESTINATION "${tool_dest}")
