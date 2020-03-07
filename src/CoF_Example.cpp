#include "precompiled.h"

char gszExeDir[MAX_PATH];

plugin_info_t gPluginInfo =
{
	"CoF Example",
	"Example plugin for CoF Manager.",
	"https://github.com/2010kohtep/",

	1,
	0,

	0,
};

EXPORT bool Init(int nVerMajor, int nVerMinor)
{
	return true;
}

EXPORT void GetPluginInfo(plugin_info_t **info)
{
	*info = &gPluginInfo;
}

EXPORT void GetGameVars(cof_data_t *cofdata)
{

}

BOOL WINAPI DllMain(_In_ HINSTANCE hinstDLL, _In_ DWORD fdwReason, _In_ LPVOID lpvReserved)
{
	return TRUE;
}