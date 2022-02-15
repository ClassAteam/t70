add_library(hydro_system "")

target_sources(hydro_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_2.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_3.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_4.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_5.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_6.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_7.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_8.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_9.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_10.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/hydro_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/hydro_int.h
  )

target_include_directories(hydro_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(hydro_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(hydro_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(hydro_system PRIVATE exchange)
target_link_libraries(hydro_system PRIVATE algorithms)
target_link_libraries(hydro_system PRIVATE landinggear_system)
target_link_libraries(hydro_system PRIVATE aircondition_system)
target_link_libraries(hydro_system PRIVATE brakes_system)
target_link_libraries(hydro_system PRIVATE wingsmech_system)
