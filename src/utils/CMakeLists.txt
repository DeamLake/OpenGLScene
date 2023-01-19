set(curr_dir ${CMAKE_CURRENT_SOURCE_DIR})

aux_source_directory(${curr_dir} UTILS_SRCS)

add_library(utils ${UTILS_SRCS})