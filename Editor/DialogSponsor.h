#pragma once

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/listctrl.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/spinbutt.h>

#include "Toolset.h"

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

class DialogSponsor : public wxDialog
{
public:
    DialogSponsor(wxWindow* parent, Toolset* const tools, const std::string selectedCountry, wxWindowID id = wxID_ANY, const wxString& title = _("My Dialog"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~DialogSponsor();

protected:
    // Event Handler
    void OnAbort(wxCommandEvent& event);
    void OnOk(wxCommandEvent& event);

protected:
    wxListCtrl* m_listCtrlSponsors;
    wxTextCtrl* m_textCtrlText;
    wxButton* m_buttonFont;
    wxTextCtrl* m_textCtrlFont;
    std::vector<wxButton*> m_button;
    wxStaticBitmap* m_staticBitmapSponsor;
    wxStaticText* m_staticText67;
    wxStaticText* m_staticTextSize;
    wxSpinButton* m_spinButtonSize;
    wxButton* m_buttonOK;
    wxButton* m_buttonAbort;

private:
    void initializeSponsorsList(wxListCtrl* control);

    Toolset* tools = nullptr;
    std::string m_selectedCountry;
    std::shared_ptr<Core::Country> m_country = nullptr;
};

