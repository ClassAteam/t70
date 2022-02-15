add_library(brakes_system "")

target_sources(brakes_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/brakes_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/brakes_2.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/brakes_3.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/brakes_4.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/brakes_5.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/brakes_6.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/brakes_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/brakes_int.h
  )

target_include_directories(brakes_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(brakes_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(brakes_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(brakes_system PRIVATE exchange)
target_link_libraries(brakes_system PRIVATE algorithms)
target_link_libraries(brakes_system PRIVATE hydro_system)
target_link_libraries(brakes_system PRIVATE landinggear_system)
