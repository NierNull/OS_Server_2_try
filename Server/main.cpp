#include "ServerForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Server;

[STAThreadAttribute]

int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Server::ServerForm form;
	Application::Run(% form);

	return 0;
}