add_library(powerdc_system "")

target_sources(powerdc_system
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_1.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_2_3.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_4.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_5_6.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_7.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_8.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_9_10.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_11.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_12.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_13.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_14.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_15.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_16.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_20.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_21.cpp
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/allElCons.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/allElCons.h
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_int.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/powerdc_int.h
  )

target_include_directories(powerdc_system
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

target_link_libraries(powerdc_system PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(powerdc_system PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(powerdc_system PRIVATE exchange)
target_link_libraries(powerdc_system PRIVATE algorithms)

target_link_libraries(powerdc_system PRIVATE antiicing_system)
target_link_libraries(powerdc_system PRIVATE hydro_system)
target_link_libraries(powerdc_system PRIVATE landinggear_system)
target_link_libraries(powerdc_system PRIVATE wingsmech_system)
