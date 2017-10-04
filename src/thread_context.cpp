
//          Copyright RedPortal 2017 - 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <mgcpp/context/thread_context.hpp>
#include <mgcpp/system/error_code.hpp>
#include <mgcpp/system/exception.hpp>

namespace mgcpp
{
    cublasHandle_t 
    thread_context::
    get_cublas_context(size_t device_id) 
    {
        auto& handle = _cublas_handle[device_id];
        if(!handle)
        {
            cublasHandle_t new_handle;
            std::error_code status = cublasCreate(&new_handle);

            if(status != status_t::success)
                MGCPP_THROW_SYSTEM_ERROR(status);

            handle = cublas_handle_unique_ptr(
                &new_handle,
                [](cublasHandle_t* handle)
                {
                    cublasDestroy(*handle);
                });
        }

        return *handle;
    }
}
