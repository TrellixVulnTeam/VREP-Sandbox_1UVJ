#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Poco::JSON" for configuration "None"
set_property(TARGET Poco::JSON APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(Poco::JSON PROPERTIES
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/libPocoJSON.so.50"
  IMPORTED_SONAME_NONE "libPocoJSON.so.50"
  )

list(APPEND _IMPORT_CHECK_TARGETS Poco::JSON )
list(APPEND _IMPORT_CHECK_FILES_FOR_Poco::JSON "${_IMPORT_PREFIX}/lib/libPocoJSON.so.50" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
