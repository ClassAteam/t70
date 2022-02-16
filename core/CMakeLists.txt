
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
target_link_libraries(logic PRIVATE algorithms)

target_link_libraries(logic PRIVATE aircondition_system)
target_link_libraries(logic PRIVATE antifire_system)
target_link_libraries(logic PRIVATE antiicing_system)
target_link_libraries(logic PRIVATE brakes_system)
target_link_libraries(logic PRIVATE bailout_system)
target_link_libraries(logic PRIVATE cabinlighting_system)
target_link_libraries(logic PRIVATE emergencyalarm_system)
target_link_libraries(logic PRIVATE hydro_system)
target_link_libraries(logic PRIVATE landinggear_system)
target_link_libraries(logic PRIVATE pneumatic_system)
target_link_libraries(logic PRIVATE powerdc_system)
target_link_libraries(logic PRIVATE presure_system)
target_link_libraries(logic PRIVATE wingsmech_system)
