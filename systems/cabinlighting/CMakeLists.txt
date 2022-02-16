add_library(cabinlighting_system "")

target_sources(cabinlighting_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_2.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_3.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_4.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_5.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_6.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_7.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_8.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_9.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_10.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/cabinlighting_int.h
  )

target_include_directories(cabinlighting_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(cabinlighting_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(cabinlighting_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(cabinlighting_system PRIVATE exchange)
target_link_libraries(cabinlighting_system PRIVATE algorithms)

target_link_libraries(cabinlighting_system PRIVATE powerdc_system)
target_link_libraries(cabinlighting_system PRIVATE landinggear_system)
