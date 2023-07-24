# Variables not automatically deduced:
# D2SE_MOD_BANNER
# D2SE_BOARD
# D2SE_DESCRIPTION_FILE

set(_D2SE_MODULE_BASE_DIR "${CMAKE_CURRENT_LIST_DIR}" CACHE INTERNAL "")
message(STATUS "_D2SE_MODULE_BASE_DIR='${_D2SE_MODULE_BASE_DIR}'")

function(D2MOO_generate_d2se_ini target_path)
  if(NOT D2SE_NAME)
    set(D2SE_NAME ${PROJECT_NAME})
  endif()
  if(NOT D2SE_TITLE)
    set(D2SE_TITLE ${PROJECT_NAME})
  endif()
  if(NOT D2SE_VERSION_MAJOR)
    set(D2SE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
  endif()
  if(NOT D2SE_VERSION_MINOR)
    set(D2SE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
  endif()
  if(NOT D2SE_VERSION_REVISION)
    set(D2SE_VERSION_REVISION ${PROJECT_VERSION_PATCH})
  endif()
  if(NOT D2SE_CORE)
    set(D2SE_CORE ${D2MOO_ORDINALS_VERSION})
  endif()
  if(NOT D2SE_README AND EXISTS README.md)
    set(D2SE_README README.md)
  endif()
  if(NOT D2SE_HOMEPAGE)
    set(D2SE_HOMEPAGE ${PROJECT_HOMEPAGE_URL})
  endif()
  
  configure_file(${_D2SE_MODULE_BASE_DIR}/D2SE_SETUP.ini.in ${target_path}/D2SE_SETUP.ini @ONLY)
endfunction()
