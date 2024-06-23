# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtt1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtt1_autogen.dir/ParseCache.txt"
  "qtt1_autogen"
  )
endif()
