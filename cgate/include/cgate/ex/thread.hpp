#pragma once

#include "cgate/export.hpp"
#include "cgate/ex/ithreading.hpp"

namespace cgate
{
    namespace ex
    {
        /// @brief
        class Thread : public IThreading
        {
        public:
            /// @brief
            ///
            /// @param message
            Thread(const std::string message = "Thread error") noexcept
                : IThreading{message}
            {

            } /* end of : Thread(const std::string message) noexcept */

        }; // end of : class Thread

    } // end of : namespace ex

} // end of : namespace cgate
