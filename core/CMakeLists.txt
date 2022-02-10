
add_executable(logic "")

target_sources(logic
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/mainwindow.cpp
  ${CMAKE_CURRENT_LIST_DIR}/mainwindow.h
  ${CMAKE_CURRENT_LIST_DIR}/threadModel.cpp
  ${CMAKE_CURRENT_LIST_DIR}/threadModel.h
  ${CMAKE_CURRENT_LIST_DIR}/T70_Win.ui
  ${CMAKE_CURRENT_LIST_DIR}/main.cpp
  )

target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Gui)
target_link_libraries(logic PRIVATE Qt${QT_VERSION_MAJOR}::Network)


target_link_libraries(logic PRIVATE vim95)

# add_subdirectory(evolution)
# add_subdirectory(initial)
# add_subdirectory(io)
# add_subdirectory(parser)

# target_link_libraries(automata
#   PRIVATE
#     conversion
#     evolution
#     initial
#     io
#     parser
#   )
