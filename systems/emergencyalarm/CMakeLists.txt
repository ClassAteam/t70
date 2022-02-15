add_library(emergencyalarm_system "")

target_sources(emergencyalarm_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/emergencyalarm_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/emergencyalarm_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/emergencyalarm_int.h
  )

target_include_directories(emergencyalarm_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(emergencyalarm_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(emergencyalarm_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(emergencyalarm_system PRIVATE exchange)
target_link_libraries(emergencyalarm_system PRIVATE algorithms)
# target_link_libraries(emergencyalarm_system PRIVATE brakes_system)
