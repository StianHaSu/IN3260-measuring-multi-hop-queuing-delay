file(REMOVE_RECURSE
  "../../../build/lib/libns3.39-propagation-debug.pdb"
  "../../../build/lib/libns3.39-propagation-debug.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/libpropagation.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
