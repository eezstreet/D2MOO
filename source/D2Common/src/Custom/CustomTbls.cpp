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

/**
 *	Load all BIN files here.
 */
void __fastcall DATATBLS_CUSTOM_LoadAll(void* pMemPool)
{
	DATATBLS_CUSTOM_LoadLvlMazeInsert(pMemPool);
}

/**
 *	Unload all BIN files here.
 */
void __fastcall DATATBLS_CUSTOM_UnloadAll()
{
	DATATBLS_CUSTOM_UnloadLvlMazeInsert();
}