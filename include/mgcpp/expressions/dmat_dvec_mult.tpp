
//          Copyright RedPortal, mujjingun 2017 - 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <mgcpp/expressions/dmat_dvec_mult.hpp>

namespace mgcpp {
template <typename MatExpr, typename VecExpr>
inline mat_vec_mult_op<MatExpr, VecExpr> operator*(
    dmat_expr<MatExpr> const& mat,
    dvec_expr<VecExpr> const& vec) noexcept {
  return mat_vec_mult_op<MatExpr, VecExpr>(~mat, ~vec);
}

template <typename MatExpr, typename VecExpr>
inline mat_vec_mult_op<MatExpr, VecExpr> mult(
    dmat_expr<MatExpr> const& mat,
    dvec_expr<VecExpr> const& vec) noexcept {
  return mat_vec_mult_op<MatExpr, VecExpr>(~mat, ~vec);
}
}  // namespace mgcpp
