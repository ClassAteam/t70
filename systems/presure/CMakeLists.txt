
add_library(presure_system "")

target_sources(presure_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/presure.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/presure_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/presure_int.h
  )

target_include_directories(presure_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(presure_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(presure_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(presure_system PRIVATE exchange)
target_link_libraries(presure_system PRIVATE algorithms)
