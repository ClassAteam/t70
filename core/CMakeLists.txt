
add_executable(logic "")

target_sources(logic
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/mainwindow.cpp
  ${CMAKE_CURRENT_LIST_DIR}/mainwindow.h
  ${CMAKE_CURRENT_LIST_DIR}/threadModel.cpp
  ${CMAKE_CURRENT_LIST_DIR}/threadModel.h
  ${CMAKE_CURRENT_LIST_DIR}/T70_Win.ui
  ${CMAKE_CURRENT_LIST_DIR}/main.cpp
  ${CMAKE_CURRENT_LIST_DIR}/utilTimeClassQt.cpp
  ${CMAKE_CURRENT_LIST_DIR}/utilTimeClassQt.h
  )

target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Gui)
target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Network)


if(NOT IGNORE_VIM95)
  target_link_libraries(logic PRIVATE vim95)
endif()

target_link_libraries(logic PRIVATE exchange)

  # target_link_libraries(logic PRIVATE antifire_system)
