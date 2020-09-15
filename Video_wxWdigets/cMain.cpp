#include "cMain.h"
#include <chrono>
using namespace std;

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(10001, Btn_addClicked)
EVT_BUTTON(10002, Btn_resetClicked)
EVT_BUTTON(10003, Btn_saveClicked)
EVT_BUTTON(10004, Btn_deleteClicked)

wxEND_EVENT_TABLE();

//wxUSE_LISTCTRL(cMain, wxListbox)





cMain::cMain() : wxFrame(nullptr, wxID_ANY, "HiMES - 2020", wxPoint(300, 300), wxSize(1024, 768))
{


	time_t timer = time(NULL);
	tm* local_time = localtime(&timer);
	std::string nowtime = std::to_string(local_time->tm_hour) + " 시 " + std::to_string(local_time->tm_min) + " 분 " + std::to_string(local_time->tm_sec) + " 초";
	wxString st1(nowtime);

	m_st1 = new wxStaticText(this, wxID_ANY, "라벨번호 : ", wxPoint(30, 35));
	m_st2 = new wxStaticText(this, wxID_ANY, "원자제명 : ", wxPoint(30, 75));
	m_st3 = new wxStaticText(this, wxID_ANY, "제품코드 : ", wxPoint(30, 115));
	m_st4 = new wxStaticText(this, wxID_ANY, "중  량(kg) : ", wxPoint(30, 155));
	m_st5 = new wxStaticText(this, wxID_ANY, "수  량(ea) : ", wxPoint(30, 195));

	m_tc1 = new wxTextCtrl(this, 20001, "", wxPoint(100, 30), wxSize(300, 30));
	m_tc2 = new wxTextCtrl(this, 20002, "", wxPoint(100, 70), wxSize(300, 30));
	m_tc3 = new wxTextCtrl(this, 20003, "", wxPoint(100, 110), wxSize(300, 30));
	m_tc4 = new wxTextCtrl(this, 20004, "", wxPoint(100, 150), wxSize(300, 30));
	m_tc5 = new wxTextCtrl(this, 20005, "", wxPoint(100, 190), wxSize(300, 30));

	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(450, 30), wxSize(500, 600));
	m_list2 = new wxListBox(this, wxID_ANY, wxPoint(30, 241), wxSize(370, 390));


	m_btn1 = new wxButton(this, 10001, "추가", wxPoint(35, 650), wxSize(170, 40));
	m_btn2 = new wxButton(this, 10002, "리셋", wxPoint(220, 650), wxSize(170, 40));

	m_btn3 = new wxButton(this, 10003, "저장", wxPoint(480, 650), wxSize(200, 40));
	m_btn4 = new wxButton(this, 10004, "삭제", wxPoint(720, 650), wxSize(200, 40));


	m_tc1->SetHint(" ex) 111544722");
	m_tc2->SetHint(" ex) 제품명");
	m_tc3->SetHint(" ex) LCD1101");
	m_tc4->SetHint(" ex) 100");
	m_tc5->SetHint(" ex) 1");

}

cMain::~cMain()
{



}

void cMain::Btn_addClicked(wxCommandEvent& evt1) // 추가버튼 클릭시 이벤트



{

	//
	/*
	if (m_tc1->IsEmpty() && m_tc2->IsEmpty() && m_tc3->IsEmpty() && m_tc4->IsEmpty()) {


		m_list2->AppendString(m_tc1->GetValue());
		evt1.Skip();
	}
	else
	{
		evt1.Skip();
	}
	*/


	/*
	printf("유닉스 타임 (Unix Time): %d 초\n\n", timer); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초

	printf("현재 년: %d\n", t->tm_year + 1900);
	printf("현재 월: %d\n", t->tm_mon + 1);
	printf("현재 일: %d\n\n", t->tm_mday);

	printf("현재 시: %d\n", t->tm_hour);
	printf("현재 분: %d\n", t->tm_min);
	printf("현재 초: %d\n\n", t->tm_sec);

	printf("현재 요일: %d\n", t->tm_wday); // 일요일=0, 월요일=1, 화요일=2, 수요일=3, 목요일=4, 금요일=5,토요일 = 6
	printf("올해 몇 번째 날: %d\n", t->tm_yday); // 1월 1일은 0, 1월 2일은 1
	printf("서머타임 적용 여부: %d\n", t->tm_isdst); // 0 이면 서머타임 없음
	*/

	//CString sTmp;
	//sTmp.Format("[%s]  라벨번호 :", st1, m_tc1->GetValue());
	//m_list2->AppendString("["+st1+"]  라벨번호 : " + m_tc1->GetValue() + "가 추가되었습니다.");
	//m_list2->AppendString(st1);

	evt1.Skip();

}

void cMain::Btn_resetClicked(wxCommandEvent& evt2) // 리셋버튼 클릭시 이벤트
{
	m_tc1->SetValue("");
	m_tc2->SetValue("");
	m_tc3->SetValue("");
	m_tc4->SetValue("");
	m_tc5->SetValue("");

	wxMessageBox("초기화 되었습니다.");
	m_tc1->SetFocus();

	evt2.Skip();

}

void cMain::Btn_saveClicked(wxCommandEvent& evt3) // 저장버튼 클릭시 이벤트
{


}

void cMain::Btn_deleteClicked(wxCommandEvent& evt4) // 삭제버튼 클릭시 이벤트
{
}

