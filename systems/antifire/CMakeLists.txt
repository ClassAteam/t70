add_library(antifire_system "")

target_sources(antifire_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antifire_1.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/antifire_1.h
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antifire_2.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/antifire_2.h
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antifire_3.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/antifire_3.h
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antifire_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/antifire_int.h
  )

target_include_directories(antifire_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(antifire_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(antifire_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(antifire_system PRIVATE exchange)
target_link_libraries(antifire_system PRIVATE algorithms)
target_link_libraries(antifire_system PRIVATE brakes_system)
