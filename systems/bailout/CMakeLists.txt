add_library(bailout_system "")

target_sources(bailout_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/bailout_1_2.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/bailout_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/bailout_int.h
  )

target_include_directories(bailout_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(bailout_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(bailout_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(bailout_system PRIVATE exchange)
target_link_libraries(bailout_system PRIVATE algorithms)

target_link_libraries(bailout_system PRIVATE hydro_system)
