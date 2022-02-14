add_library(exchange "")
target_sources(exchange
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/Struct_DeviceConnect.h
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/Struct_FromRmiOper.h
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/Struct_FromRmiPilot.h
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/Struct_ISU.h
  PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/Struct_ToRmiNavig.h
  )

target_include_directories(exchange
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
  )
