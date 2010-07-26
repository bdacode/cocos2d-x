// Application main form file.
 
// Original file name: test_uphoneMainForm.cpp
// Generated by TOPS Builder:Project wizard,Date:2010-7-26
 

 
#include  "test_uphoneMainForm.h"
#include  "test_uphone_res_def.h"

TMainForm::TMainForm(TApplication * pApp):TWindow(pApp)
{
	Create(TEST_U_ID_Form1002);
}

TMainForm::~TMainForm()
{

}

Boolean TMainForm::EventHandler(TApplication * pApp, EventType * pEvent)
{
	Boolean bHandled = FALSE;

	switch(pEvent->eType)
	{
	case EVENT_WinInit:
		{
			bHandled = TRUE;
		}
		break;
	case EVENT_WinPaint:
		{
			DrawWindow();
			bHandled = TRUE;
		}
		break;
	case EVENT_CtrlSelect:
		{
			//switch(pEvent->sParam1)
			//{
			//case RES_SYSTEM_WINDOW_TITLE_BUTTON_ID:
			//	bHandled = TRUE;
			//	break;			
			//}
		}
		break;
	case EVENT_WinClose:
		{
			// Stop the application since the main form has been closed
			pApp->SendStopEvent();
		}
		break;
	}
	
	if (FALSE == bHandled)
	{
		return TWindow::EventHandler(pApp,pEvent);
	}
	return bHandled;
}
