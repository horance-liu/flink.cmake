add_library(foo)

target_sources(foo
  PRIVATE foo.cc
)

target_link_libraries(foo
  PRIVATE bar
)

target_compile_features(foo
  PRIVATE cxx_std_11
)