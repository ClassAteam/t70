add_library(aircondition_system "")

target_sources(aircondition_system
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_1_2_3.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_11.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_4_5.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_6_7.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_8.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_9.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_10.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_12.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_13.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_14.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_15.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_16.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_17.cpp
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_int.cpp
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/aircondition_int.h
  )

target_include_directories(aircondition_system
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(aircondition_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(aircondition_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(aircondition_system PRIVATE exchange)
target_link_libraries(aircondition_system PRIVATE algorithms)
target_link_libraries(aircondition_system PRIVATE landinggear_system)
target_link_libraries(aircondition_system PRIVATE brakes_system)
target_link_libraries(aircondition_system PRIVATE hydro_system)
