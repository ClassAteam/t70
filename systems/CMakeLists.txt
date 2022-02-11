option(IGNORE_VIM95 "Using vim95 module" OFF)

if(NOT IGNORE_VIM95)
  add_subdirectory(vim95)
endif()

# add_subdirectory(antifire)
