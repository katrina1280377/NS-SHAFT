#include "MyForm.h"
#include "Form1.h"
#include <time.h>include <stdlib.h>
using namespace Project1;

[STAThreadAttribute]

int main(array<System::String^> ^args)
{
	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	
	return 0;