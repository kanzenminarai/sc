-- Compiler
set_toolset("cc", "clang")
set_optimize("none")
set_warnings("allextra", "error")
add_includedirs("./include/")

-- Main binary
target("sc")
  set_kind("binary")
  add_files("src/main.c")
  add_deps("stackI64")
  add_deps("evalI64")
  add_deps("mathI64")
target_end()

-- Integer stack implementation
target("stackI64")
  set_kind("object")
  add_files("src/stackI64.c")
target_end()

-- Integer expression evaluator implementation
target("evalI64")
  set_kind("object")
  add_files("src/evalI64.c")
target_end()

-- Integer mathematical functions implementation
target("mathI64")
  set_kind("object")
  add_files("src/mathI64.c")
target_end()
