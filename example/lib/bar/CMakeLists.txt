add_library(bar)

target_sources(bar
  PRIVATE src/bar.cc
)

target_include_directories(bar
  PUBLIC  include
  PRIVATE src
)

target_compile_features(bar
  PRIVATE cxx_std_11
)