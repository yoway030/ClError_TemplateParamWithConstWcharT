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
버전 16.11.5
VisualStudio.16.Release/16.11.5+31729.503
Microsoft .NET Framework
버전 4.8.04084

설치된 버전: Community

Visual C++ 2019   00435-60000-00000-AA317
Microsoft Visual C++ 2019

ASP.NET and Web Tools 2019   16.11.75.64347
ASP.NET and Web Tools 2019

Azure App Service 도구 v3.0.0   16.11.75.64347
Azure App Service 도구 v3.0.0

C# 도구   3.11.0-4.21403.6+ae1fff344d46976624e68ae17164e0607ab68b10
IDE에서 사용되는 C# 구성 요소입니다. 프로젝트 형식 및 설정에 따라 다른 버전의 컴파일러를 사용할 수 있습니다.

IncrediBuild Build Acceleration   1.5.0.13
IncrediBuild effectively reduces compilation and development times by up to 90%.

IntelliCode 확장   1.0
IntelliCode Visual Studio 확장 세부 정보

Microsoft JVM Debugger   1.0
Provides support for connecting the Visual Studio debugger to JDWP compatible Java Virtual Machines

Microsoft MI-Based Debugger   1.0
Provides support for connecting Visual Studio to MI compatible debuggers

Microsoft Visual C++ Wizards   1.0
Microsoft Visual C++ Wizards

Microsoft Visual Studio VC 패키지   1.0
Microsoft Visual Studio VC 패키지

NuGet 패키지 관리자   5.11.0
Visual Studio의 NuGet 패키지 관리자입니다. NuGet에 대한 자세한 내용은 https://docs.nuget.org/를 참조하세요.

ProjectServicesPackage Extension   1.0
ProjectServicesPackage Visual Studio Extension Detailed Info

Test Adapter for Boost.Test   1.0
Boost.Test용으로 작성된 단위 테스트를 사용하여 Visual Studio의 테스트 도구를 사용하도록 설정합니다. 사용 약관 및 타사 통지는 확장 설치 디렉터리에서 확인할 수 있습니다.

Test Adapter for Google Test   1.0
Google Test용으로 작성된 단위 테스트와 함께 Visual Studio의 테스트 도구를 사용합니다. 사용 약관 및 타사 고지 사항은 확장 설치 디렉터리에서 확인할 수 있습니다.

TypeScript 도구   16.0.30526.2002
Microsoft Visual Studio용 TypeScript 도구

Visual Basic 도구   3.11.0-4.21403.6+ae1fff344d46976624e68ae17164e0607ab68b10
IDE에서 사용되는 Visual Basic 구성 요소입니다. 프로젝트 형식 및 설정에 따라 다른 버전의 컴파일러를 사용할 수 있습니다.

Visual F# Tools   16.11.0-beta.21322.6+488cc578cafcd261d90d748d8aaa7b8b091232dc
Microsoft Visual F# Tools

Visual Studio Code 디버그 어댑터 호스트 패키지   1.0
Visual Studio에서 Visual Studio Code 디버그 어댑터를 호스트하기 위한 Interop 계층

Visual Studio Tools for CMake   1.0
Visual Studio Tools for CMake

일반적인 Azure Tools   1.10
Azure Mobile Services 및 Microsoft Azure 도구에서 사용할 일반적인 서비스를 제공합니다.

플랫폼 간 모바일 개발용 Visual C++ (Android)   16.0.31506.176
플랫폼 간 모바일 개발용 Visual C++ (Android)
*/