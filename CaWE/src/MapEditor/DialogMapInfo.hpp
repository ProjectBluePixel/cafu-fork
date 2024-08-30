
#ifndef CAFU_DIALOG_MAPINFO_HPP_INCLUDED
#define CAFU_DIALOG_MAPINFO_HPP_INCLUDED

#include "wx/wx.h"


class MapDocumentT;


class MapInfoDialogT : public wxDialog
{
    public:

    /// Constructor.
    /// MapDoc is the document for which the info should be shown.
    MapInfoDialogT(MapDocumentT& MapDoc);
};

#endif
