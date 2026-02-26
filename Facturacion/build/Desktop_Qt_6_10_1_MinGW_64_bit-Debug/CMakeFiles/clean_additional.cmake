# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Facturacion_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Facturacion_autogen.dir\\ParseCache.txt"
  "Facturacion_autogen"
  )
endif()
