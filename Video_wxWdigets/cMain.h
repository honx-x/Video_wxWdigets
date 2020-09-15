#pragma once
#include "wx/wx.h"


class cMain : public wxFrame


{

public:
	cMain();
	~cMain();

public:

	wxString* st1 = nullptr;
	//string* nowtime = nullptr;

	wxStaticText* m_st1 = nullptr;
	wxStaticText* m_st2 = nullptr;
	wxStaticText* m_st3 = nullptr;
	wxStaticText* m_st4 = nullptr;
	wxStaticText* m_st5 = nullptr;

	wxButton * m_btn1 = nullptr;
	wxButton * m_btn2 = nullptr;
	wxButton * m_btn3 = nullptr;
	wxButton * m_btn4 = nullptr;

	wxTextCtrl* m_tc1 = nullptr;
	wxTextCtrl* m_tc2 = nullptr;
	wxTextCtrl* m_tc3 = nullptr;
	wxTextCtrl* m_tc4 = nullptr;
	wxTextCtrl* m_tc5 = nullptr;

	wxListBox* m_list1 = nullptr;
	wxListBox* m_list2 = nullptr;
	
	

	void Btn_addClicked(wxCommandEvent& evt1);
	void Btn_resetClicked(wxCommandEvent& evt2);
	void Btn_saveClicked(wxCommandEvent& evt3);
	void Btn_deleteClicked(wxCommandEvent& evt4);

	wxDECLARE_EVENT_TABLE();
};



