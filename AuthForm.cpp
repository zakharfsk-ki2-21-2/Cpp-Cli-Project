#include "AuthForm.h"

/*
* ������� ������ ���������.
* �볺�� ������ ��������� � ������ ���������, �������� ����� ����������, �������� �������� ���, ����� ������.
*
* ����������� ���� �������� ������, �������� ������� ������.
* ��� ����������� ������ �볺�� ������ ����������.
* ������� ������ ����. � ������� ���������� ��������� �볺���� ����������� ������� ������� ��������.
*/

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Cursach::AuthForm form;
	// Create the main window and run it
	Application::Run(% form);
}