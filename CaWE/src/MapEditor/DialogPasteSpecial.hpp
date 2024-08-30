
#ifndef CAFU_DIALOG_PASTE_SPECIAL_HPP_INCLUDED
#define CAFU_DIALOG_PASTE_SPECIAL_HPP_INCLUDED

#include "wx/wx.h"


class PasteSpecialDialogT : public wxDialog
{
    public:

    PasteSpecialDialogT();

    bool MakePastedElementsWellVisible() const;


    private:

    wxRadioBox* m_PastePos;
};

#endif
