#include "bar.h"
#include <vector>
#include <algorithm>

using Repo = std::vector<std::string>;

static Repo& repo() {
    static Repo inst;
    return inst;
}

void bar_add(std::string val)
{
    repo().emplace_back(std::move(val));
}

bool bar_exist(const std::string& val)
{
    return std::find(repo().cbegin(), repo().cend(), val) != repo().cend();
}