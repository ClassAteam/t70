option(IGNORE_VIM95 "Using vim95 module" OFF)

if(NOT IGNORE_VIM95)
  add_subdirectory(vim95)
endif()

add_subdirectory(antifire)
add_subdirectory(brakes)
add_subdirectory(hydro)
add_subdirectory(landinggear)
add_subdirectory(emergencyalarm)
add_subdirectory(wingsmech)
add_subdirectory(aircondition)
