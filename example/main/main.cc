#include "bar.h"
#include <iostream>
#include <stdlib.h>

#define ASSERT_TRUE(exp) \
do { \
    if (!(exp)) { \
        std::cerr << "expect " #exp " be true, but got false" << std::endl; \
        exit( EXIT_FAILURE ); \
    } \
} while(0)

int main(int argc, char **argv)
{
    ASSERT_TRUE(bar_exist("foo"));
    ASSERT_TRUE(bar_exist("baz"));
        
    return EXIT_SUCCESS;
}