add_library(database "")
target_sources(database
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/databasemanager.cpp
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/databasemanager.h
  )

target_include_directories(database
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(database PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(database PRIVATE Qt${QT_VERSION_MAJOR}::Sql)
target_link_libraries(database PRIVATE Qt${QT_VERSION_MAJOR}::Gui)
target_link_libraries(database PRIVATE vim95)
