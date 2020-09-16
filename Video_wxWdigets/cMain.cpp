#include "cMain.h"
#include <wx/listctrl.h>
#include <chrono>
using namespace std;

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(10001, Btn_addClicked)
EVT_BUTTON(10002, Btn_resetClicked)
EVT_BUTTON(10003, Btn_saveClicked)
EVT_BUTTON(10004, Btn_deleteClicked)


wxEND_EVENT_TABLE();

//wxUSE_LISTCTRL(cMain, wxListCtrl)


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "HiMES - 2020", wxPoint(300, 300), wxSize(1024, 768))
{


	m_st1 = new wxStaticText(this, wxID_ANY, "�󺧹�ȣ : ", wxPoint(30, 35));
	m_st2 = new wxStaticText(this, wxID_ANY, "�������� : ", wxPoint(30, 75));
	m_st3 = new wxStaticText(this, wxID_ANY, "��ǰ�ڵ� : ", wxPoint(30, 115));
	m_st4 = new wxStaticText(this, wxID_ANY, "��  ��(kg) : ", wxPoint(30, 155));
	m_st5 = new wxStaticText(this, wxID_ANY, "��  ��(ea) : ", wxPoint(30, 195));

	m_tc1 = new wxTextCtrl(this, 20001, "", wxPoint(100, 30), wxSize(300, 30));
	m_tc2 = new wxTextCtrl(this, 20002, "", wxPoint(100, 70), wxSize(300, 30));
	m_tc3 = new wxTextCtrl(this, 20003, "", wxPoint(100, 110), wxSize(300, 30));
	m_tc4 = new wxTextCtrl(this, 20004, "", wxPoint(100, 150), wxSize(300, 30));
	m_tc5 = new wxTextCtrl(this, 20005, "", wxPoint(100, 190), wxSize(300, 30));

	//m_list1 = new wxListBox(this, wxID_ANY, wxPoint(450, 30), wxSize(500, 600));
	m_list2 = new wxListBox(this, wxID_ANY, wxPoint(30, 241), wxSize(370, 390));
	//m_lc1 = new wxListCtrl(this, wxID_ANY, wxPoint(450, 30), wxSize(500, 600));
	m_lc1 = new wxListCtrl(this, wxID_ANY, wxPoint(450, 30), wxSize(500, 600),wxLC_REPORT);

	m_btn1 = new wxButton(this, 10001, "�߰�", wxPoint(35, 650), wxSize(170, 40));
	m_btn2 = new wxButton(this, 10002, "����", wxPoint(220, 650), wxSize(170, 40));

	m_btn3 = new wxButton(this, 10003, "����", wxPoint(480, 650), wxSize(200, 40));
	m_btn4 = new wxButton(this, 10004, "����", wxPoint(720, 650), wxSize(200, 40));




	m_tc1->SetHint(" ex) 111544722");
	m_tc2->SetHint(" ex) ��ǰ��");
	m_tc3->SetHint(" ex) LCD1101");
	m_tc4->SetHint(" ex) 100");
	m_tc5->SetHint(" ex) 1");

	
	m_lc1->InsertColumn(0, "LabelNo",wxLIST_AUTOSIZE);
	m_lc1->InsertColumn(1, "��������",wxLIST_AUTOSIZE);
	m_lc1->InsertColumn(2, "��ǰ�ڵ�",wxLIST_AUTOSIZE);
	m_lc1->InsertColumn(3, "�߷�(kg)",wxLIST_AUTOSIZE);
	m_lc1->InsertColumn(4, "����(ea)",wxLIST_AUTOSIZE);


}

cMain::~cMain()
{

}


void cMain::Now_time() // ����ð� ���
{

	time_t timer = time(NULL);
	tm* local_time = localtime(&timer);
	std::string nowtime(std::to_string(local_time->tm_hour) + " �� " + std::to_string(local_time->tm_min) + " �� " + std::to_string(local_time->tm_sec) + " ��");

	//st1(nowtime.c_str(), wxConvUTF8);
	st1 = nowtime;

	return;

}

void cMain::Btn_addClicked(wxCommandEvent& evt1) // �߰���ư Ŭ���� �̺�Ʈ
{
	Now_time();
	//m_list2->AppendString(st1);


	int idx = 0;
	m_lc1->InsertItem(idx, m_tc1->GetValue(),0);
	idx++;
	


	m_list2->AppendString("[" + st1 + "]  �󺧹�ȣ : " + m_tc1->GetValue() + "�� �߰��Ǿ����ϴ�.");
	m_tc1->SetFocus();
	evt1.Skip();


}

void cMain::Btn_resetClicked(wxCommandEvent& evt2) // ���¹�ư Ŭ���� �̺�Ʈ
{
	m_tc1->SetValue("");
	m_tc2->SetValue("");
	m_tc3->SetValue("");
	m_tc4->SetValue("");
	m_tc5->SetValue("");


	Now_time();
	m_list2->AppendString("[" + st1 + "]  �ʱ�ȭ �Ǿ����ϴ�.");
	wxMessageBox("�ʱ�ȭ �Ǿ����ϴ�.");
	m_tc1->SetFocus();

	evt2.Skip();

}

void cMain::Btn_saveClicked(wxCommandEvent& evt3) // �����ư Ŭ���� �̺�Ʈ
{


}

void cMain::Btn_deleteClicked(wxCommandEvent& evt4) // ������ư Ŭ���� �̺�Ʈ
{
}

