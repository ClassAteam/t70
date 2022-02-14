add_library(vim95 "")

target_sources(vim95
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/vim95.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/vim95.h
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/land_comstations.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/land_comstations.h
  )

target_include_directories(vim95
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(vim95 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(vim95 PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(vim95 PRIVATE exchange)
target_link_libraries(vim95 PRIVATE algorithms)
target_link_libraries(vim95 PRIVATE database)
