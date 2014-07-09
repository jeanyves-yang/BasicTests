#Test of the "addition" function
set(testname TestAddition)
include_directories( ${CMAKE_SOURCE_DIR} )
add_executable(${testname} TestAddition.cxx )
target_link_libraries( ${testname} AddNumbersLib )
add_test(NAME ${testname} COMMAND $<TARGET_FILE:TestAddition> )

