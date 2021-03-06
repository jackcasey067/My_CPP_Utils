/*
 * A base class used to make it impossible to copy a class. Code is mostly pulled
 * from https://www.boost.org/doc/libs/1_79_0/boost/core/noncopyable.hpp, but
 * I simplified it so that I can understand it better.
 */
#ifndef jackcasey067_NONCOPYABLE_H
#define jackcasey067_NONCOPYABLE_H

namespace Util {
    /* Make it so that the class cannot be copy constructed or assigned. If move
     * construct or move assign are defined on the subclass, they still work (though
     * they do not work by default) */
    class NonCopyable {
    protected:
        NonCopyable() = default;
        ~NonCopyable() = default;

        /* No copy constructor. (Subclass could add a move constructor, however.) */
        NonCopyable(const NonCopyable&) = delete;
        /* No assignment operator. */
        NonCopyable& operator=(const NonCopyable&) = delete;
    };
}

#endif /* jackcasey067_NONCOPYABLE_H */
