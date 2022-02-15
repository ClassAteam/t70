add_library(landinggear_system "")

target_sources(landinggear_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/landinggear_event.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/landinggear_event.h
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/landinggear_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/landinggear_int.h
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/landinggear_old.cpp
  )

target_include_directories(landinggear_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(landinggear_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(landinggear_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(landinggear_system PRIVATE exchange)
target_link_libraries(landinggear_system PRIVATE algorithms)
target_link_libraries(landinggear_system PRIVATE emergencyalarm_system)
target_link_libraries(landinggear_system PRIVATE wingsmech_system)
target_link_libraries(landinggear_system PRIVATE brakes_system)
