add_executable(main main.cc)

target_link_libraries(main
  PRIVATE bar
)

# ERR: no effect
# target_link_libraries(main
#   PRIVATE foo baz
# )

target_force_link_libraries(main
  PRIVATE foo baz
)

add_test(NAME main COMMAND main)