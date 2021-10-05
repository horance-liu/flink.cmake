#include "bar.h"
#include <utility>

struct Baz {
    Baz(std::string val) {
        bar_add(std::move(val));
    }
};

static Baz baz("baz");