add_library(baz)

target_sources(baz
  PRIVATE baz.cc
)

target_link_libraries(baz
  PRIVATE bar
)

target_compile_features(baz
  PRIVATE cxx_std_11
)