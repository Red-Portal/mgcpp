
//          Copyright RedPortal 2017 - 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef _MGCPP_EXPRESSIONS_MAT_EXPR_HPP_
#define _MGCPP_EXPRESSIONS_MAT_EXPR_HPP_

#include <mgcpp/device/forward.hpp>
#include <mgcpp/type_traits/device_matrix.hpp>

namespace mgcpp
{
    template<typename T>
    struct mat_expr {};

    template<typename Matrix,
             typename = typename
             assert_device_matrix<Matrix>::result>
    inline Matrix
    eval(Matrix&& device_mat);
}

#include <mgcpp/expressions/mat_expr.tpp>
#endif
