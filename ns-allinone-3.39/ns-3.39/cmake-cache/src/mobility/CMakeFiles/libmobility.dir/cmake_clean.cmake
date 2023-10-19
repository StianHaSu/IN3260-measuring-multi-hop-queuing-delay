file(REMOVE_RECURSE
  "../../../build/lib/libns3.39-mobility-debug.pdb"
  "../../../build/lib/libns3.39-mobility-debug.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/libmobility.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
