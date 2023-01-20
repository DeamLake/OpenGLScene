set(curr_dir ${CMAKE_CURRENT_SOURCE_DIR})

aux_source_directory(${curr_dir} SHADER_SRCS)

add_library(shader ${SHADER_SRCS})