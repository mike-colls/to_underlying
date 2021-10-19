#pragma once
#include <type_traits>

namespace mc
{
    template<typename E>
    [[nodiscard]] constexpr auto to_underlying( E e ) noexcept
    {
        return static_cast<std::underlying_type_t<E>>( e );
    }
}
