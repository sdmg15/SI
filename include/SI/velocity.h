#pragma once

#include "detail/operator_helpers.h"

#include "detail/unit.h"
#include "length.h"
#include "time.h"

namespace SI {

/// Type for velocity where v = L / T
template <typename _Type, typename _Ratio>
using velocity_t = detail::unit_t<'v', 1, _Type, _Ratio>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(velocity_t, length_t, time_t)
}

} // namespace SI