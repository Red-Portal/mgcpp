#ifndef PLACEHOLDER_HPP
#define PLACEHOLDER_HPP

#include <mgcpp/expressions/forward.hpp>

namespace mgcpp {

template <size_t PlaceholderID, typename ResultType>
struct placeholder_node
    : generic_expr<placeholder_node<PlaceholderID, ResultType>,
                   PlaceholderID,
                   ResultType::template result_expr_type,
                   ResultType,
                   0> {
  using generic_expr<placeholder_node<PlaceholderID, ResultType>,
                     PlaceholderID,
                     ResultType::template result_expr_type,
                     ResultType,
                     0>::generic_expr;
};
}  // namespace mgcpp

#endif  // PLACEHOLDER_HPP
