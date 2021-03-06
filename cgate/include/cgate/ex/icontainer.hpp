#pragma once

#include "cgate/export.hpp"
#include "cgate/ex/iexception.hpp"

namespace cgate
{
    namespace ex
    {
        /// @brief
        class IContainer : public IException
        {
        protected:
            /// @brief
            ///
            /// @param message
            IContainer(const std::string message = "") noexcept
                : IException{message}
            {

            } /* end of : IContainer(const std::string message) noexcept */

        }; // end of : class IContainer

    } // end of : namespace ex

} // end of : namespace cgate
