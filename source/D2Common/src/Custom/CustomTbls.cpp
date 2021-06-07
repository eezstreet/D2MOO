// The following excel files have been added:
// LvlMazeInsert.txt controls new insertions into mazes. Think things like bosses, waypoints, things like that.
#include <D2DataTbls.h>
#include <Custom/CustomTbls.h>

CustomDataTables sgptCustomDataTables;

void __fastcall DATATBLS_CUSTOM_LoadLvlMazeInsert(void* pMemPool)
{
	D2BinFieldStrc pTbl[] =
	{
		{ "Level", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, levelId), NULL },
		{ "ReplaceW", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceFromW), NULL },
		{ "ReplaceS", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceFromS), NULL },
		{ "ReplaceE", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceFromE), NULL },
		{ "ReplaceN", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceFromN), NULL },
		{ "ReplaceToW", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceToW), NULL },
		{ "ReplaceToS", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceToS), NULL },
		{ "ReplaceToE", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceToE), NULL },
		{ "ReplaceToN", TXTFIELD_DWORD, 0, offsetof(LvlMazeInsertTxt, replaceToN), NULL },
	};

	sgptCustomDataTables.pLvlMazeInsertTxt = (LvlMazeInsertTxt*)DATATBLS_CompileTxt(pMemPool, "lvlmazeinsert", pTbl, &sgptCustomDataTables.nLvlMazeInsertTxtRecordCount, sizeof(LvlMazeInsertTxt));
}

void __fastcall DATATBLS_CUSTOM_UnloadLvlMazeInsert()
{
	if (sgptCustomDataTables.pLvlMazeInsertTxt)
	{
		DATATBLS_UnloadBin(sgptCustomDataTables.pLvlMazeInsertTxt);
		sgptCustomDataTables.pLvlMazeInsertTxt = NULL;
	}
}

void __fastcall DATATBLS_CUSTOM_LoadLvlOutdoorsFill(void* pMemPool)
{
	D2BinFieldStrc pTbl[] =
	{
		{ "Level", TXTFIELD_DWORD, 0, offsetof(LvlOutdoorsFillTxt, levelId), NULL },
		{ "Preset", TXTFIELD_DWORD, 0, offsetof(LvlOutdoorsFillTxt, presetId), NULL },
		{ "Flags", TXTFIELD_BYTE, 0, offsetof(LvlOutdoorsFillTxt, flags), NULL },
		{ "Chance", TXTFIELD_BYTE, 0, offsetof(LvlOutdoorsFillTxt, chance), NULL },
		{ "File", TXTFIELD_BYTE, 0, offsetof(LvlOutdoorsFillTxt, file), NULL }
	};

	sgptCustomDataTables.pLvlOutdoorsFillTxt = (LvlOutdoorsFillTxt*)DATATBLS_CompileTxt(pMemPool, "lvloutdoorsfill", pTbl, &sgptCustomDataTables.nLvlOutdoorsFillTxtRecordCount, sizeof(LvlOutdoorsFillTxt));
}

void __fastcall DATATBLS_CUSTOM_UnloadLvlOutdoorsFill()
{
	if (sgptCustomDataTables.pLvlOutdoorsFillTxt)
	{
		DATATBLS_UnloadBin(sgptCustomDataTables.pLvlOutdoorsFillTxt);
		sgptCustomDataTables.pLvlOutdoorsFillTxt = NULL;
	}
}

/**
 *	Load all BIN files here.
 */
void __fastcall DATATBLS_CUSTOM_LoadAll(void* pMemPool)
{
	DATATBLS_CUSTOM_LoadLvlMazeInsert(pMemPool);
	DATATBLS_CUSTOM_LoadLvlOutdoorsFill(pMemPool);
}

/**
 *	Unload all BIN files here.
 */
void __fastcall DATATBLS_CUSTOM_UnloadAll()
{
	DATATBLS_CUSTOM_UnloadLvlMazeInsert();
	DATATBLS_CUSTOM_UnloadLvlOutdoorsFill();
}