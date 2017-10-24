
//          Copyright RedPortal 2017 - 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef _MGCPP_OPERATIONS_ADDITION_HPP_
#define _MGCPP_OPERATIONS_ADDITION_HPP_

#include <mgcpp/gpu/forward.hpp>

namespace mgcpp
{
    namespace strict
    {
        template<typename T, size_t Device, storage_order SO>
        inline gpu::matrix<T, Device, SO>
        add(gpu::matrix<T, Device, SO> const& first,
            gpu::matrix<T, Device, SO> const& second);

        template<typename T, size_t Device, allignment Allign>
        inline gpu::vector<T, Device, Allign>
        add(gpu::vector<T, Device, Allign> const& first,
            gpu::vector<T, Device, Allign> const& second);
    }
}

#include <mgcpp/operations/add.tpp>
#endif
