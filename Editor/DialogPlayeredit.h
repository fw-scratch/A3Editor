#pragma once

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/listctrl.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/spinbutt.h>
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/checkbox.h>
#include <wx/radiobut.h>

#include "Toolset.h"

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

class DialogPlayeredit : public wxDialog
{
public:
    DialogPlayeredit(wxWindow* parent, Toolset* const tools, std::string selectedCountry, std::string selectedClub, wxWindowID id = wxID_ANY, const wxString& title = _("My Dialog"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~DialogPlayeredit();

protected:
    // Event Handler
    void OnAbort(wxCommandEvent& event);
    void OnOk(wxCommandEvent& event);
    void OnSelectPerson(wxListEvent& event);

protected:
    wxListCtrl* m_listCtrlPlayer;
    wxButton* m_button147;
    wxPanel* m_panel494;
    wxButton* m_button149;
    wxNotebook* m_notebook21;
    wxPanel* m_panelData1;
    wxStaticText* m_staticText37;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticText41;
    wxTextCtrl* m_textCtrlStagename;
    wxStaticText* m_staticText45;
    wxTextCtrl* m_textCtrlFirstname;
    wxStaticText* m_staticText455;
    wxStaticText* m_staticTextDay;
    wxSpinButton* m_spinButtonDay;
    wxStaticText* m_staticTextMonth;
    wxSpinButton* m_spinButtonMonth;
    wxStaticText* m_staticTextYear;
    wxSpinButton* m_spinButtonYear;
    wxStaticText* m_staticText469;
    wxStaticText* m_staticTextSkill;
    wxSpinButton* m_spinButtonSkill;
    wxStaticText* m_staticText475;
    wxStaticText* m_staticTextAge;
    wxButton* m_button445;
    wxStaticText* m_staticText425;
    wxStaticText* m_staticTextTalent;
    wxSpinButton* m_spinButton429;
    wxStaticText* m_staticText431;
    wxStaticText* m_staticTextStrongFoot;
    wxSpinButton* m_spinButton435;
    wxStaticText* m_staticText437;
    wxStaticText* m_staticTextShirtNumber;
    wxSpinButton* m_spinButton441;
    wxStaticText* m_staticText55;
    wxStaticText* m_staticText481;
    wxPanel* m_panelData2;
    wxStaticText* m_staticText59;
    wxChoice* m_choice61;
    wxStaticText* m_staticText63;
    wxChoice* m_choice65;
    wxCheckBox* m_checkNational;
    wxCheckBox* m_checkNationalplayer;
    wxCheckBox* m_checkNationalresigned;
    wxCheckBox* m_checkCaptainresigned;
    wxRadioButton* m_radioBright;
    wxRadioButton* m_radioDark;
    wxRadioButton* m_radioAfrikan;
    wxRadioButton* m_radioAsian;
    wxRadioButton* m_radioExtremelyshort;
    wxRadioButton* m_radioShort;
    wxRadioButton* m_radioCurly;
    wxRadioButton* m_radioLong;
    wxCheckBox* m_checkUnshaved;
    wxCheckBox* m_checkBeard;
    wxCheckBox* m_checkMoustache;
    wxCheckBox* m_checkGoatee;
    wxRadioButton* m_radioLightblonde;
    wxRadioButton* m_radioRed;
    wxRadioButton* m_radioGrey;
    wxRadioButton* m_radioBlond;
    wxRadioButton* m_radioBlack;
    wxRadioButton* m_radioBrown;
    wxRadioButton* m_radioBald;
    wxPanel* m_panelPositions;
    wxRadioButton* m_radioButtonMainGoalkeeper;
    wxRadioButton* m_radioButtonMainSweeper;
    wxRadioButton* m_radioMainCenterback;
    wxRadioButton* m_radioMainLeftdefender;
    wxRadioButton* m_radioMainRightdefender;
    wxRadioButton* m_radioMainDefensivemidfielder;
    wxRadioButton* m_radioMainLeftmidfielder;
    wxRadioButton* m_radioMainRightmidfielder;
    wxRadioButton* m_radioMainAttackingmidfielder;
    wxRadioButton* m_radioMainForward;
    wxCheckBox* m_checkBoxSecondarySweeper;
    wxCheckBox* m_checkBoxSecondaryCenterback;
    wxCheckBox* m_checkSecondaryLeftdefender;
    wxCheckBox* m_checkSecondaryRightdefender;
    wxCheckBox* m_checkSecondaryDefensivemidfielder;
    wxCheckBox* m_checkSecondaryLeftmidfielder;
    wxCheckBox* m_checkSecondaryRightmidfielder;
    wxCheckBox* m_checkSecondaryAttackingmidfielder;
    wxCheckBox* m_checkSecondaryForward;
    wxPanel* m_panelSkills;
    wxStaticText* m_staticText279;
    wxStaticText* m_staticText281;
    wxCheckBox* m_checkPlusHeader;
    wxCheckBox* m_checkMinusHeader;
    wxCheckBox* m_checkPlusDuel;
    wxCheckBox* m_checkMinusDuel;
    wxCheckBox* m_checkPlusSpeed;
    wxCheckBox* m_checkMinusSpeed;
    wxCheckBox* m_checkPlusSurpluspower;
    wxCheckBox* m_checkMinusSurpluspower;
    wxCheckBox* m_checkPlusPenalty;
    wxCheckBox* m_checkMinusPenalty;
    wxCheckBox* m_checkPlusFreekicks;
    wxCheckBox* m_checkMinusFreekicks;
    wxCheckBox* m_checkPlusFlanks;
    wxCheckBox* m_checkMinusFlanks;
    wxCheckBox* m_checkPlusGoalinstincts;
    wxCheckBox* m_checkMinusGoalinstinkts;
    wxCheckBox* m_checkPlusWorkrate;
    wxCheckBox* m_checkMinusWorkrate;
    wxCheckBox* m_checkPlusTechnique;
    wxCheckBox* m_checkMinusTechnique;
    wxCheckBox* m_checkPlusBallmagic;
    wxCheckBox* m_checkMinusBallmagic;
    wxCheckBox* m_checkPlusPlaymaker;
    wxCheckBox* m_checkMinusPlaymaker;
    wxCheckBox* m_checkPlusFoursomechain;
    wxCheckBox* m_checkMinusFoursomechain;
    wxCheckBox* m_checkPlusGamesummary;
    wxCheckBox* m_checkMinusGamesummary;
    wxCheckBox* m_checkPlusHoldball;
    wxCheckBox* m_checkMinusHoldball;
    wxCheckBox* m_checkPlusDribbling;
    wxCheckBox* m_checkMinusDribbling;
    wxStaticText* m_staticText285;
    wxStaticText* m_staticText287;
    wxCheckBox* m_checkPlusPenaltykiller;
    wxCheckBox* m_checkMinusPenaltykiller;
    wxCheckBox* m_checkPlusStrongreflexes;
    wxCheckBox* m_checkMinusStrongreflexes;
    wxCheckBox* m_checkPlusRunningout;
    wxCheckBox* m_checkMinusRunningout;
    wxCheckBox* m_checkPlusFlanksGoalkeeper;
    wxCheckBox* m_checkMinusFlanksGoalkeeper;
    wxCheckBox* m_checkPlusFist;
    wxCheckBox* m_checkMinusFist;
    wxCheckBox* m_checkPlusBallsecurity;
    wxCheckBox* m_checkMinusBallsecurity;
    wxCheckBox* m_checkPlusSpeedGoalkeeper;
    wxCheckBox* m_checkMinusSpeedGoalkeeper;
    wxCheckBox* m_checkPlusLongpunts;
    wxCheckBox* m_checkMinusLongpunts;
    wxCheckBox* m_checkPlusLongdrops;
    wxCheckBox* m_checkMinusLongdrops;
    wxPanel* m_panelCharacteristics1;
    wxCheckBox* m_checkFighter;
    wxCheckBox* m_checkTrainingworldchampion;
    wxCheckBox* m_checkTraininglazyplayer;
    wxCheckBox* m_checkViolator;
    wxCheckBox* m_checkFairplayer;
    wxCheckBox* m_checkMimosa;
    wxCheckBox* m_checkSlyfox;
    wxCheckBox* m_checkSpecialist;
    wxCheckBox* m_checkAllrounder;
    wxCheckBox* m_checkFlexibleplayer;
    wxCheckBox* m_checkRefereefavorite;
    wxCheckBox* m_checkHomeplayer;
    wxCheckBox* m_checkFairweatherplayer;
    wxCheckBox* m_checkJoker;
    wxCheckBox* m_checkEgoist;
    wxCheckBox* m_checkBrotherlightfooted;
    wxCheckBox* m_checkLeader;
    wxCheckBox* m_checkHothead;
    wxCheckBox* m_checkHappynature;
    wxCheckBox* m_checkManwithoutnerves;
    wxCheckBox* m_checkBundleofnerves;
    wxCheckBox* m_checkPhlegmatic;
    wxCheckBox* m_checkMoneyvolture;
    wxCheckBox* m_checkClubsupporter;
    wxCheckBox* m_checkProfessionalpattern;
    wxCheckBox* m_checkScandalnoodle;
    wxCheckBox* m_checkSensitive;
    wxCheckBox* m_checkAirsandgraces;
    wxCheckBox* m_checkTeenstar;
    wxCheckBox* m_checkTroublemaker;
    wxCheckBox* m_checkLiverwurst;
    wxCheckBox* m_checkUnifyingfigure;
    wxPanel* m_panelCharacteristics2;
    wxRadioButton* m_radioNormal;
    wxRadioButton* m_radioRobust;
    wxRadioButton* m_radioSusceptible;
    wxRadioButton* m_radioKneeproblems;
    wxRadioButton* m_radioQuicklyfitagain;
    wxRadioButton* m_radioLastsuntilfitagain;
    wxRadioButton* m_radioSnivelling;
    wxRadioButton* m_radioAudiencenormal;
    wxRadioButton* m_radioAudiencefavorite;
    wxRadioButton* m_radioAudiencehatefigure;
    wxStaticText* m_staticText155;
    wxButton* m_buttonOK;
    wxButton* m_buttonAbort;

private:
    void initializePlayerList(wxListCtrl* control);
    void populatePerson();
    void populatePlayer(std::shared_ptr<Core::Player> player);
    void computeAverageSkill();

    Toolset* tools = nullptr;
    std::string m_selectedCountry;
    std::shared_ptr<Core::Country> m_country;
    std::string m_selectedClub;
    std::shared_ptr<Core::Team> m_team;
    std::vector<std::shared_ptr<Core::Player>> m_players;
    std::string m_selectedPerson;
    float m_averageSkill = 0.0f;
};
