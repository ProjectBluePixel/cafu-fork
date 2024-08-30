
#ifndef CAFU_GUISYS_WINDOW_CREATE_PARAMS_HPP_INCLUDED
#define CAFU_GUISYS_WINDOW_CREATE_PARAMS_HPP_INCLUDED

#include "TypeSys.hpp"


namespace cf
{
    namespace GuiSys
    {
        class GuiImplT;


        /// Creation parameters for a GUI window.
        class WindowCreateParamsT : public cf::TypeSys::CreateParamsT
        {
            public:

            /// Constructor.
            /// @param Gui_ The GUI in which the window should be created.
            WindowCreateParamsT(GuiImplT& Gui_);

            GuiImplT& Gui; ///< The GUI in which the window should be created.
        };
    }
}

#endif
