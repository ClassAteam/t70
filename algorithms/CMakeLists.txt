add_library(algorithms "")
target_sources(algorithms
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/algorithms.h
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/algorithms.cpp
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/wind_functions.h
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/wind_functions.cpp
  )

target_include_directories(algorithms
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(algorithms PRIVATE Qt${QT_VERSION_MAJOR}::Core)
