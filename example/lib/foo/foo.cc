#include "bar.h"
#include <utility>

struct Foo {
    Foo(std::string val) {
        bar_add(std::move(val));
    }
};

static Foo foo("foo");