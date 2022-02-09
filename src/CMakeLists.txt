
add_executable(calculator "")

target_sources(calculator
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/calculatorform.cpp
  ${CMAKE_CURRENT_LIST_DIR}/calculatorform.h
  ${CMAKE_CURRENT_LIST_DIR}/calculatorform.ui
  ${CMAKE_CURRENT_LIST_DIR}/main.cpp
  )

target_link_libraries(calculator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

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
