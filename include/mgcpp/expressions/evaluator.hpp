
//          Copyright RedPortal, mujjingun 2017 - 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef EVALUATOR_HPP
#define EVALUATOR_HPP

#include <mgcpp/expressions/eval_context.hpp>

namespace mgcpp {
struct evaluator {
    template <typename Op>
    inline static auto eval(Op const &op, eval_context& ctx);
};
}

#endif // EVALUATOR_HPP