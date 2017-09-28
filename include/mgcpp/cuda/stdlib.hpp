//          Copyright RedPortal 2017 - 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef CUDA_TEMPLATE_STDLIB_HPP
#define CUDA_TEMPLATE_STDLIB_HPP

#include <outcome.hpp>

#include <mgcpp/system/error_code.hpp>

#include <type_traits>
#include <cstdlib>
#include <new>

namespace outcome = OUTCOME_V2_NAMESPACE;

namespace mgcpp
{
    
    template<typename ElemType,
             typename = std::enable_if<
                 std::is_arithmetic<ElemType>::value>>
    outcome::result<ElemType*> cuda_malloc(size_t size) noexcept;


    template<typename ElemType>
    outcome::result<void> cuda_free(ElemType* ptr) noexcept;
}

#include <mgcpp/cuda/stdlib.tpp>
#endif
