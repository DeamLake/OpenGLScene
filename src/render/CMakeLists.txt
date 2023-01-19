set(curr_dir ${CMAKE_CURRENT_SOURCE_DIR})

aux_source_directory(${curr_dir} RENDER_SRCS)

add_library(render ${RENDER_SRCS})