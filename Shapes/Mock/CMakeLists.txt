cmake_minimum_required (VERSION 2.8.11)

add_library(moc_shapes INTERFACE)

target_include_directories(moc_shapes INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(moc_shapes INTERFACE shapes)