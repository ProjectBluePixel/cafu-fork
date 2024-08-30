
#ifndef CAFU_DIALOG_TRANSFORM_HPP_INCLUDED
#define CAFU_DIALOG_TRANSFORM_HPP_INCLUDED

#include "Math3D/Vector3.hpp"
#include "wx/dialog.h"


class TransformDialogT : public wxDialog
{
    public:

    TransformDialogT(wxWindow* parent=0);

    Vector3dT m_Value;
    int       m_Mode;
};

#endif
