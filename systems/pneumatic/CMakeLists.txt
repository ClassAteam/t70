add_library(pneumatic_system "")

target_sources(pneumatic_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/pneumatic_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/pneumatic_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/pneumatic_int.h
  )

target_include_directories(pneumatic_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(pneumatic_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(pneumatic_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(pneumatic_system PRIVATE exchange)
target_link_libraries(pneumatic_system PRIVATE algorithms)
