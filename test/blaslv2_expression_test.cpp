
//          Copyright RedPortal, mujjingun 2017 - 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <gtest/gtest.h>

#include <mgcpp/expressions/dmat_dvec_mult.hpp>
#include <mgcpp/matrix/device_matrix.hpp>
#include <mgcpp/vector/device_vector.hpp>

TEST(lv2_expr, mat_vec_mult) {
  using matrix = mgcpp::device_matrix<float>;
  using vector = mgcpp::device_vector<float>;

  matrix M = matrix::from_list(
      {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}});  // (4, 3)
  vector v({1, 2, 3});

  auto mult_expr = M * v;

  vector result;
  EXPECT_NO_THROW({ result = mult_expr.eval(); });

  auto shape = result.shape();
  EXPECT_EQ(shape, 4);

  float expected[] = {14, 32, 50, 68};
  for (size_t i = 0; i < shape; ++i) {
    EXPECT_EQ(result.check_value(i), expected[i]) << "i: " << i;
  }
}
