#include <Windows.h>
#include <Imports/DllBases.h>

HMODULE delayedD2CMPDllBaseGet()
{
	static HMODULE DLLBASE_D2CMP = LoadLibraryA("D2CMP.dll");
	return DLLBASE_D2CMP;
}

HMODULE delayedD2LANGDllBaseGet()
{
	static HMODULE DLLBASE_D2LANG = LoadLibraryA("D2Lang.dll");
	return DLLBASE_D2LANG;
}

HMODULE delayedFOGDllBaseGet() {
	static HMODULE DLLBASE_FOG = LoadLibraryA("Fog.dll");
	return DLLBASE_FOG;
}

BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, void* lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		LoadLibrary("D2Reborne.dll");
		break;
	case DLL_PROCESS_DETACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}
