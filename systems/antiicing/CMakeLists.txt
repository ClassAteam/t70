add_library(antiicing_system "")

target_sources(antiicing_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_2.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_3.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_4.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_5.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_6.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/antiicing_int.h
  )

target_include_directories(antiicing_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(antiicing_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(antiicing_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(antiicing_system PRIVATE exchange)
target_link_libraries(antiicing_system PRIVATE algorithms)
target_link_libraries(antiicing_system PRIVATE landinggear_system)
target_link_libraries(antiicing_system PRIVATE powerdc_system)
