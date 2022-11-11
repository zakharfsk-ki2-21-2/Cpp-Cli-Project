#include "AuthForm.h"

/*
* Система Прокат автомобілів.
* Клієнт вибирає Автомобіль зі списку доступних, заповнює форму Замовлення, вказуючи паспортні дані, строк оренди.
*
* Адміністратор може відхилити Заявку, указавши причини відмови.
* При підтвердженні Заявки Клієнт оплачує Замовлення.
* Система виписує суму. У випадку ушкодження Автомобіля Клієнтом Адміністратор вносить відповідні позначки.
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