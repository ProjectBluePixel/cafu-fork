
#ifndef CAFU_FONTWIZARD_WELCOME_PAGE_HPP_INCLUDED
#define CAFU_FONTWIZARD_WELCOME_PAGE_HPP_INCLUDED

#include "wx/wizard.h"


class FontWizardT;


class WelcomePageT : public wxWizardPageSimple
{
    public:

    WelcomePageT(FontWizardT* Parent);
};

#endif
