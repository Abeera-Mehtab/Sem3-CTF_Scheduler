#include "WelcomeForm.h"
#include "CreditsForm.h"
#include "ViewTeams.h"
#include "ViewSchedule.h"
#include "MatchSimulator.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    FinalProj::WelcomeForm form;
    Application::Run(% form);
}
