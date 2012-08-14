/*
$Id: main.cpp 5 2011-11-16 02:45:30Z crackinglandia $

DRx Calculator v1.1

Copyright (C) 2011 +NCR/CRC! [ReVeRsEr] http://crackinglandia.blogspot.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Author: +NCR/CRC! [ReVeRsEr]
Date: September 2011

*/

#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0700

#include <windows.h>
#include <commctrl.h>
#include "resource.h"
#include "drxtable.h"

#pragma comment(lib, "comctl32.lib")

#define ONEXEC 0
#define ONREAD 1
#define ONWRITE 2

#define SIZE1 0
#define SIZE2 1
#define SIZE4 2

// global handles
HWND hTypeDr0;
HWND hTypeDr1;
HWND hTypeDr2;
HWND hTypeDr3;

HWND hSizeDr0;
HWND hSizeDr1;
HWND hSizeDr2;
HWND hSizeDr3;

wchar_t szOnExec[] = L"ONEXEC";
wchar_t szOnWrite[] = L"ONWRITE";
wchar_t szOnRead[] = L"ONREAD";

wchar_t szSize1[] = L"1";
wchar_t szSize2[] = L"2";
wchar_t szSize4[] = L"4";

// function prototypes
void GetControlHandles(HWND);
void PopulateCombos(HWND);
void CloseHandles(void);
void ShowHelp(HWND);
void DisableComboBox(HWND);
void EnableComboBox(HWND);

// log routines
void ShowErrorObtainingHandles(HWND hDlgMain);

void DisableComboBox(HWND hCombo)
{
	EnableWindow(hCombo, FALSE);
}

void EnableComboBox(HWND hCombo)
{
	EnableWindow(hCombo, TRUE);
}

// function definitions
void ShowHelp(HWND hDlgMain)
{
	MessageBox(hDlgMain, L"DRx Calculator v1.1\n\nCoded by +NCR/CRC! [ReVeRsEr]\n\nMail: crackinglandia(at)gmail(dot)com\nTwitter: @crackinglandia\n\nGeneral Pico, La Pampa\nArgentina\n\nSeptiembre 2011", L"DRx Calculator", MB_ICONINFORMATION);
}

void ShowErrorObtainingHandles(HWND hDlgMain)
{
	MessageBox(hDlgMain, L"Error obtaining handle! :(", L"Ups!", MB_ICONERROR);
}

void GetControlHandles(HWND hDlgMain)
{
	hTypeDr0 = GetDlgItem(hDlgMain, TYPE_DR0);
	if(hTypeDr0 == NULL)
		ShowErrorObtainingHandles(hDlgMain);

	hTypeDr1 = GetDlgItem(hDlgMain, TYPE_DR1);
	if(hTypeDr1 == NULL)
		ShowErrorObtainingHandles(hDlgMain);

	hTypeDr2 = GetDlgItem(hDlgMain, TYPE_DR2);
	if(hTypeDr2 == NULL)
		ShowErrorObtainingHandles(hDlgMain);

	hTypeDr3 = GetDlgItem(hDlgMain, TYPE_DR3);
	if(hTypeDr3 == NULL)
		ShowErrorObtainingHandles(hDlgMain);

	hSizeDr0 = GetDlgItem(hDlgMain, SIZE_DR0);
	if(hSizeDr0 == NULL)
		ShowErrorObtainingHandles(hDlgMain);

	hSizeDr1 = GetDlgItem(hDlgMain, SIZE_DR1);
	if(hSizeDr1 == NULL)
		ShowErrorObtainingHandles(hDlgMain);

	hSizeDr2 = GetDlgItem(hDlgMain, SIZE_DR2);
	if(hSizeDr2 == NULL)
		ShowErrorObtainingHandles(hDlgMain);

	hSizeDr3 = GetDlgItem(hDlgMain, SIZE_DR3);
	if(hSizeDr3 == NULL)
		ShowErrorObtainingHandles(hDlgMain);
}

void PopulateCombos(HWND hDlgMain)
{

	// values for DR0
	SendMessage(hTypeDr0, CB_ADDSTRING, 0, (LPARAM)szOnExec);
	SendMessage(hTypeDr0, CB_ADDSTRING, 0, (LPARAM)szOnRead);
	SendMessage(hTypeDr0, CB_ADDSTRING, 0, (LPARAM)szOnWrite);

	SendMessage(hSizeDr0, CB_ADDSTRING, 0, (LPARAM)szSize1);
	SendMessage(hSizeDr0, CB_ADDSTRING, 0, (LPARAM)szSize2);
	SendMessage(hSizeDr0, CB_ADDSTRING, 0, (LPARAM)szSize4);

	// values for DR1
	SendMessage(hTypeDr1, CB_ADDSTRING, 0, (LPARAM)szOnExec);
	SendMessage(hTypeDr1, CB_ADDSTRING, 0, (LPARAM)szOnRead);
	SendMessage(hTypeDr1, CB_ADDSTRING, 0, (LPARAM)szOnWrite);

	SendMessage(hSizeDr1, CB_ADDSTRING, 0, (LPARAM)szSize1);
	SendMessage(hSizeDr1, CB_ADDSTRING, 0, (LPARAM)szSize2);
	SendMessage(hSizeDr1, CB_ADDSTRING, 0, (LPARAM)szSize4);

	// values for DR2
	SendMessage(hTypeDr2, CB_ADDSTRING, 0, (LPARAM)szOnExec);
	SendMessage(hTypeDr2, CB_ADDSTRING, 0, (LPARAM)szOnRead);
	SendMessage(hTypeDr2, CB_ADDSTRING, 0, (LPARAM)szOnWrite);

	SendMessage(hSizeDr2, CB_ADDSTRING, 0, (LPARAM)szSize1);
	SendMessage(hSizeDr2, CB_ADDSTRING, 0, (LPARAM)szSize2);
	SendMessage(hSizeDr2, CB_ADDSTRING, 0, (LPARAM)szSize4);

	// values for DR3
	SendMessage(hTypeDr3, CB_ADDSTRING, 0, (LPARAM)szOnExec);
	SendMessage(hTypeDr3, CB_ADDSTRING, 0, (LPARAM)szOnRead);
	SendMessage(hTypeDr3, CB_ADDSTRING, 0, (LPARAM)szOnWrite);

	SendMessage(hSizeDr3, CB_ADDSTRING, 0, (LPARAM)szSize1);
	SendMessage(hSizeDr3, CB_ADDSTRING, 0, (LPARAM)szSize2);
	SendMessage(hSizeDr3, CB_ADDSTRING, 0, (LPARAM)szSize4);
}

void CloseHandles(void)
{
	CloseHandle(hTypeDr0);
	CloseHandle(hTypeDr1);
	CloseHandle(hTypeDr2);
	CloseHandle(hTypeDr3);

	CloseHandle(hSizeDr0);
	CloseHandle(hSizeDr1);
	CloseHandle(hSizeDr2);
	CloseHandle(hSizeDr3);

}

BOOL CALLBACK AppDlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  wchar_t resultStr[255];
  int iCbSelectionType, iCbSelectionSize;
  DWORD dr0Result = 0, dr1Result = 0, dr2Result = 0, dr3Result = 0, globalResult = 0;
  //WORD b = 0;

  switch(uMsg)
  {
  case WM_INITDIALOG:
    SetClassLongPtr(hDlg, GCLP_HICON, (long)LoadIcon(0, IDI_APPLICATION));

	// Get handles for controls in main windows
	GetControlHandles(hDlg);
	// Populates combo boxes
	PopulateCombos(hDlg);

	// disable all the combo boxes
	DisableComboBox(hTypeDr0);
	DisableComboBox(hTypeDr1);
	DisableComboBox(hTypeDr2);
	DisableComboBox(hTypeDr3);

	DisableComboBox(hSizeDr0);
	DisableComboBox(hSizeDr1);
	DisableComboBox(hSizeDr2);
	DisableComboBox(hSizeDr3);

	return 1;

  case WM_COMMAND:
	if (HIWORD(wParam) == CBN_SELCHANGE)
	{
		if (LOWORD(wParam) == TYPE_DR0)
		{
			iCbSelectionType = SendMessage(hTypeDr0, CB_GETCURSEL, 0, 0);
			if (iCbSelectionType != ONEXEC)
				EnableComboBox(hSizeDr0);
			else
			{
				SendMessage(hSizeDr0, CB_SETCURSEL, 0, 0);
				DisableComboBox(hSizeDr0);
			}
		}

		//-----------------------------------------------------------

		if (LOWORD(wParam) == TYPE_DR1)
		{
			iCbSelectionType = SendMessage(hTypeDr1, CB_GETCURSEL, 0, 0);
			if (iCbSelectionType != ONEXEC)
				EnableComboBox(hSizeDr1);
			else
			{
				SendMessage(hSizeDr1, CB_SETCURSEL, 0, 0);
				DisableComboBox(hSizeDr1);
			}
		}

		//-----------------------------------------------------------

		if (LOWORD(wParam) == TYPE_DR2)
		{
			iCbSelectionType = SendMessage(hTypeDr2, CB_GETCURSEL, 0, 0);
			if (iCbSelectionType != ONEXEC)
				EnableComboBox(hSizeDr2);
			else
			{
				SendMessage(hSizeDr2, CB_SETCURSEL, 0, 0);
				DisableComboBox(hSizeDr2);
			}
		}

		//-----------------------------------------------------------

		if (LOWORD(wParam) == TYPE_DR3)
		{
			iCbSelectionType = SendMessage(hTypeDr3, CB_GETCURSEL, 0, 0);
			if (iCbSelectionType != ONEXEC)
				EnableComboBox(hSizeDr3);
			else
			{
				SendMessage(hSizeDr3, CB_SETCURSEL, 0, 0);
				DisableComboBox(hSizeDr3);
			}
		}

		//-----------------------------------------------------------
	}

    switch(wParam)
    {


    case EXIT:
		CloseHandles();
		EndDialog(hDlg, 0);
		break;

	case IDCANCEL:
		CloseHandles();
		EndDialog(hDlg, 0);
		break;

	case HELP:
		ShowHelp(hDlg);
		break;

	case CHECK_DR0:
		if(IsDlgButtonChecked(hDlg, CHECK_DR0) == BST_CHECKED)
		{
			SendMessage(hTypeDr0, CB_SETCURSEL, 0, 0);
			SendMessage(hSizeDr0, CB_SETCURSEL, 0, 0);

			EnableComboBox(hTypeDr0);
			DisableComboBox(hSizeDr0);
		}
		else
		{
			DisableComboBox(hSizeDr0);
			DisableComboBox(hTypeDr0);
		}
		break;

	case CHECK_DR1:
		if(IsDlgButtonChecked(hDlg, CHECK_DR1) == BST_CHECKED)
		{
			SendMessage(hTypeDr1, CB_SETCURSEL, 0, 0);
			SendMessage(hSizeDr1, CB_SETCURSEL, 0, 0);

			EnableComboBox(hTypeDr1);
			DisableComboBox(hSizeDr1);
		}
		else
		{
			DisableComboBox(hTypeDr1);
			DisableComboBox(hSizeDr1);
		}
		break;

	case CHECK_DR2:
		if(IsDlgButtonChecked(hDlg, CHECK_DR2) == BST_CHECKED)
		{
			SendMessage(hTypeDr2, CB_SETCURSEL, 0, 0);
			SendMessage(hSizeDr2, CB_SETCURSEL, 0, 0);

			EnableComboBox(hTypeDr2);
			DisableComboBox(hSizeDr2);
		}
		else
		{
			DisableComboBox(hTypeDr2);
			DisableComboBox(hSizeDr2);
		}
		break;

	case CHECK_DR3:
		if(IsDlgButtonChecked(hDlg, CHECK_DR3) == BST_CHECKED)
		{
			SendMessage(hTypeDr3, CB_SETCURSEL, 0, 0);
			SendMessage(hSizeDr3, CB_SETCURSEL, 0, 0);

			EnableComboBox(hTypeDr3);
			DisableComboBox(hSizeDr3);
		}
		else
		{
			DisableComboBox(hTypeDr3);
			DisableComboBox(hSizeDr3);
		}
		break;

	case CALCULATE:
		// first, we need to check if there is at least one checkbox selected
		if((IsDlgButtonChecked(hDlg, CHECK_DR0) == BST_UNCHECKED) &&
			(IsDlgButtonChecked(hDlg, CHECK_DR1) == BST_UNCHECKED) &&
			(IsDlgButtonChecked(hDlg, CHECK_DR2) == BST_UNCHECKED) &&
			(IsDlgButtonChecked(hDlg, CHECK_DR3) == BST_UNCHECKED))
		{
			MessageBox(hDlg, L"No selection was made!!!\nYou MUST select at least one register", L"No selection :(", MB_ICONERROR);
		}
		else
		{
			// we must know which checboxes were selected, can be one or more than one
			// also, we MUST ensure that a selection was made in both combos
			if(IsDlgButtonChecked(hDlg, CHECK_DR0) == BST_CHECKED)
			{
				// we know the user selected DR0 so, we add the corresponding values
				dr0Result += LOCAL_EXACT_BPM_ENABLED + DR0_LOCAL_EXACT_BPM_ENABLED;

				// get the DR0_TYPE and DR0_SIZE values
				iCbSelectionType = SendMessage(hTypeDr0, CB_GETCURSEL, 0, 0);
				iCbSelectionSize = SendMessage(hSizeDr0, CB_GETCURSEL, 0, 0);

				// if the user select ONEXEC, then, the unique size for it is 1
				// this is a special case so we evaluate it separate

				if(iCbSelectionType == ONEXEC)
				{
					dr0Result += DR0_EXECUTION + DR0_LEN1;
				}
				else
				{
					// we make sure the user selected Type and Size for the corresponding DR register
					if((iCbSelectionType != CB_ERR) && (iCbSelectionSize != CB_ERR))
					{
						// switch for the DR type
						switch(iCbSelectionType)
						{
							case ONREAD: 
								dr0Result += DR0_RW;
								break;
							case ONWRITE:
								dr0Result += DR0_W;
								break;
							default: break;
						}

						// switch for the DR size
						switch(iCbSelectionSize)
						{
							case SIZE1: 
								dr0Result += DR0_LEN1;
								break;
							case SIZE2: 
								dr0Result += DR0_LEN2;
								break;
							case SIZE4: 
								dr0Result += DR0_LEN4;
								break;
							default: break;
						}
					}
				}
			}

			// ---------------------------------------------------------------

			if(IsDlgButtonChecked(hDlg, CHECK_DR1) == BST_CHECKED)
			{
				dr1Result += LOCAL_EXACT_BPM_ENABLED + DR1_LOCAL_EXACT_BPM_ENABLED;

				iCbSelectionType = SendMessage(hTypeDr1, CB_GETCURSEL, 0, 0);
				iCbSelectionSize = SendMessage(hSizeDr1, CB_GETCURSEL, 0, 0);

				if(iCbSelectionType == ONEXEC)
				{
					dr1Result += DR1_EXECUTION + DR1_LEN1;
				}
				else
				{
					// we make sure the user selected Type and Size for the corresponding DR register
					if((iCbSelectionType != CB_ERR) && (iCbSelectionSize != CB_ERR))
					{
						// switch for the DR type
						switch(iCbSelectionType)
						{
							case ONREAD: 
								dr1Result += DR1_RW;
								break;
							case ONWRITE:
								dr1Result += DR1_W;
								break;
							default: break;
						}

						// switch for the DR size
						switch(iCbSelectionSize)
						{
							case SIZE1: 
								dr1Result += DR1_LEN1;
								break;
							case SIZE2: 
								dr1Result += DR1_LEN2;
								break;
							case SIZE4: 
								dr1Result += DR1_LEN4;
								break;
							default: break;
						}
					}
				}
			}

			// ---------------------------------------------------------------

			if(IsDlgButtonChecked(hDlg, CHECK_DR2) == BST_CHECKED)
			{
				dr2Result += LOCAL_EXACT_BPM_ENABLED + DR2_LOCAL_EXACT_BPM_ENABLED;

				iCbSelectionType = SendMessage(hTypeDr2, CB_GETCURSEL, 0, 0);
				iCbSelectionSize = SendMessage(hSizeDr2, CB_GETCURSEL, 0, 0);

				if(iCbSelectionType == ONEXEC)
				{
					dr2Result += DR2_EXECUTION + DR2_LEN1;
				}
				else
				{
					// we make sure the user selected Type and Size for the corresponding DR register
					if((iCbSelectionType != CB_ERR) && (iCbSelectionSize != CB_ERR))
					{
						// switch for the DR type
						switch(iCbSelectionType)
						{
							case ONREAD: 
								dr2Result += DR2_RW;
								break;
							case ONWRITE:
								dr2Result += DR2_W;
								break;
							default: break;
						}

						// switch for the DR size
						switch(iCbSelectionSize)
						{
							case SIZE1: 
								dr2Result += DR2_LEN1;
								break;
							case SIZE2: 
								dr2Result += DR2_LEN2;
								break;
							case SIZE4: 
								dr2Result += DR2_LEN4;
								break;
							default: break;
						}
					}
				}
			}

			// ---------------------------------------------------------------

			if(IsDlgButtonChecked(hDlg, CHECK_DR3) == BST_CHECKED)
			{
				dr3Result += LOCAL_EXACT_BPM_ENABLED + DR3_LOCAL_EXACT_BPM_ENABLED;

				iCbSelectionType = SendMessage(hTypeDr3, CB_GETCURSEL, 0, 0);
				iCbSelectionSize = SendMessage(hSizeDr3, CB_GETCURSEL, 0, 0);

				if(iCbSelectionType == ONEXEC)
				{
					dr3Result += DR3_EXECUTION + DR3_LEN1;
				}
				else
				{
					// we make sure the user selected Type and Size for the corresponding DR register
					if((iCbSelectionType != CB_ERR) && (iCbSelectionSize != CB_ERR))
					{
						// switch for the DR type
						switch(iCbSelectionType)
						{
							case ONREAD: 
								dr3Result += DR3_RW;
								break;
							case ONWRITE:
								dr3Result += DR3_W;
								break;
							default: break;
						}

						// switch for the DR size
						switch(iCbSelectionSize)
						{
							case SIZE1: 
								dr3Result += DR3_LEN1;
								break;
							case SIZE2: 
								dr3Result += DR3_LEN2;
								break;
							case SIZE4: 
								dr3Result += DR3_LEN4;
								break;
							default: break;
						}
					}
				}
			}

			// ---------------------------------------------------------------
			// final result
			globalResult = dr0Result + dr1Result + dr2Result + dr3Result;

			wsprintf(resultStr, L"0x%X", globalResult);
			SetDlgItemText(hDlg, EDIT_CALCULATE, resultStr);

			// we make sure the variables are zeroed
			globalResult = 0;
			dr0Result = 0;
			dr1Result = 0;
			dr2Result = 0;
			dr3Result = 0;
		}
		break;
    }
  }
  return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  InitCommonControls();
  DialogBoxParam(hInstance, (LPCTSTR)IDD_DIALOG1, 0, AppDlgProc, 0);
  return 0;
}