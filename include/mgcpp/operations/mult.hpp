
//          Copyright RedPortal 2017 - 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef _MGCPP_OPERATIONS_MULTIPLICATION_HPP_
#define _MGCPP_OPERATIONS_MULTIPLICATION_HPP_

#include <mgcpp/matrix/device_matrix.hpp>
#include <mgcpp/vector/device_vector.hpp>
#include <mgcpp/system/concept.hpp>
#include <mgcpp/type_traits/device_matrix.hpp>

namespace mgcpp
{
    namespace strict
    {
        template<typename LhsMat, typename RhsMat,
                 MGCPP_CONCEPT(is_device_matrix<LhsMat>::value &&
                               is_device_matrix<RhsMat>::value)>
        inline device_matrix<typename LhsMat::value_type,
                             LhsMat::device_id,
                             typename LhsMat::allocator_type>
        mult(LhsMat const& first, RhsMat const& second);

        template<typename T, size_t Device, allignment Allign, typename Alloc>
        inline device_vector<T, Device, Allign, Alloc>
        mult(device_vector<T, Device, Allign, Alloc> const& first,
             device_vector<T, Device, Allign, Alloc> const& second);

        template<typename T, size_t Device, allignment Allign, typename Alloc>
        inline device_vector<T, Device, Allign, Alloc>
        mult(T scalar,
             device_vector<T, Device, Allign, Alloc> const& vec);


        // template<typename T, size_t Device, storage_order SO>
        // void
        // mult_assign(gpu::matrix<T, Device, SO>& first,
        //             gpu::matrix<T, Device, SO> const& second);
    }
}

#include <mgcpp/operations/mult.tpp>
#endif
