// visual studio 16.11.5 compiler error

template<typename T>
struct Base
{
};

// "const wchar_t*" is occured compiler error. (C1001)
// "wchar_t*" is fine
template<const wchar_t* Typename>
class Something : public Base<Something<Typename>>
{
public:
	Something()
	{
	}
};

int main()
{
	static wchar_t TypeName[] = L"TypeName";
	auto a0 = new Something<TypeName>();

	return 0;
}

/*
* Microsoft Visual Studio Community 2019
���� 16.11.5
VisualStudio.16.Release/16.11.5+31729.503
Microsoft .NET Framework
���� 4.8.04084

��ġ�� ����: Community

Visual C++ 2019   00435-60000-00000-AA317
Microsoft Visual C++ 2019

ASP.NET and Web Tools 2019   16.11.75.64347
ASP.NET and Web Tools 2019

Azure App Service ���� v3.0.0   16.11.75.64347
Azure App Service ���� v3.0.0

C# ����   3.11.0-4.21403.6+ae1fff344d46976624e68ae17164e0607ab68b10
IDE���� ���Ǵ� C# ���� ����Դϴ�. ������Ʈ ���� �� ������ ���� �ٸ� ������ �����Ϸ��� ����� �� �ֽ��ϴ�.

IncrediBuild Build Acceleration   1.5.0.13
IncrediBuild effectively reduces compilation and development times by up to 90%.

IntelliCode Ȯ��   1.0
IntelliCode Visual Studio Ȯ�� ���� ����

Microsoft JVM Debugger   1.0
Provides support for connecting the Visual Studio debugger to JDWP compatible Java Virtual Machines

Microsoft MI-Based Debugger   1.0
Provides support for connecting Visual Studio to MI compatible debuggers

Microsoft Visual C++ Wizards   1.0
Microsoft Visual C++ Wizards

Microsoft Visual Studio VC ��Ű��   1.0
Microsoft Visual Studio VC ��Ű��

NuGet ��Ű�� ������   5.11.0
Visual Studio�� NuGet ��Ű�� �������Դϴ�. NuGet�� ���� �ڼ��� ������ https://docs.nuget.org/�� �����ϼ���.

ProjectServicesPackage Extension   1.0
ProjectServicesPackage Visual Studio Extension Detailed Info

Test Adapter for Boost.Test   1.0
Boost.Test������ �ۼ��� ���� �׽�Ʈ�� ����Ͽ� Visual Studio�� �׽�Ʈ ������ ����ϵ��� �����մϴ�. ��� ��� �� Ÿ�� ������ Ȯ�� ��ġ ���͸����� Ȯ���� �� �ֽ��ϴ�.

Test Adapter for Google Test   1.0
Google Test������ �ۼ��� ���� �׽�Ʈ�� �Բ� Visual Studio�� �׽�Ʈ ������ ����մϴ�. ��� ��� �� Ÿ�� ���� ������ Ȯ�� ��ġ ���͸����� Ȯ���� �� �ֽ��ϴ�.

TypeScript ����   16.0.30526.2002
Microsoft Visual Studio�� TypeScript ����

Visual Basic ����   3.11.0-4.21403.6+ae1fff344d46976624e68ae17164e0607ab68b10
IDE���� ���Ǵ� Visual Basic ���� ����Դϴ�. ������Ʈ ���� �� ������ ���� �ٸ� ������ �����Ϸ��� ����� �� �ֽ��ϴ�.

Visual F# Tools   16.11.0-beta.21322.6+488cc578cafcd261d90d748d8aaa7b8b091232dc
Microsoft Visual F# Tools

Visual Studio Code ����� ����� ȣ��Ʈ ��Ű��   1.0
Visual Studio���� Visual Studio Code ����� ����͸� ȣ��Ʈ�ϱ� ���� Interop ����

Visual Studio Tools for CMake   1.0
Visual Studio Tools for CMake

�Ϲ����� Azure Tools   1.10
Azure Mobile Services �� Microsoft Azure �������� ����� �Ϲ����� ���񽺸� �����մϴ�.

�÷��� �� ����� ���߿� Visual C++ (Android)   16.0.31506.176
�÷��� �� ����� ���߿� Visual C++ (Android)
*/