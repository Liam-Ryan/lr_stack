set(SOURCE_FILES lr_stack.c lr_stack.h)
add_library(stack ${SOURCE_FILES})
target_include_directories(stack PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})