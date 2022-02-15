
add_library(wingsmech_system "")

target_sources(wingsmech_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/wingsmech_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/wingsmech_2.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/wingsmech_3.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/wingsmech_4.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/wingsmech_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/wingsmech_int.h
  )

target_include_directories(wingsmech_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(wingsmech_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(wingsmech_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(wingsmech_system PRIVATE exchange)
target_link_libraries(wingsmech_system PRIVATE algorithms)
target_link_libraries(wingsmech_system PRIVATE hydro_system)
target_link_libraries(wingsmech_system PRIVATE landinggear_system)
