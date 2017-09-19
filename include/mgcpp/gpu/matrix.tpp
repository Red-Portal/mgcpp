#include <mgcpp/gpu/matrix.hpp>
#include <mgcpp/cuda/cuda_template_stdlib.hpp>

namespace mg
{

    template<typename ElemType, size_t DeviceId>
    gpu::matrix<ElemType, DeviceId>::
    matrix()
        : data(nullptr),
          _x_dim(0),
          _y_dim(0),
          _released(true)
    {}

    template<typename ElemType, size_t DeviceId>
    gpu::matrix<ElemType, DeviceId>::
    matrix(size_t x_dim, size_t y_dim)
        : data(cuda_malloc<ElemType>(x_dim * y_dim)),
          _x_dim(x_dim),
          _y_dim(y_dim),
          _released(false)
    {}

    template<typename ElemType, size_t DeviceId>
    gpu::matrix<ElemType, DeviceId>::
    matrix(size_t x_dim, size_t y_dim, ElemType init)
        : data(cuda_malloc<ElemType>(x_dim * y_dim)),
          _x_dim(x_dim),
          _y_dim(y_dim),
          _released(false)
    {
        cuda_memcpy();
    }

}