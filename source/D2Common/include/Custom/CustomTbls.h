#pragma once
#include <D2BasicTypes.h>

/**
 *	LvlMazeInsert.txt
 */
struct LvlMazeInsertTxt
{
	uint32_t levelId;
	uint32_t replaceFromW;
	uint32_t replaceFromS;
	uint32_t replaceFromE;
	uint32_t replaceFromN;
	uint32_t replaceToW;
	uint32_t replaceToS;
	uint32_t replaceToE;
	uint32_t replaceToN;
};

/**
 *	All custom data tables.
 */
struct CustomDataTables
{
	int nLvlMazeInsertTxtRecordCount;
	LvlMazeInsertTxt* pLvlMazeInsertTxt;
};

extern CustomDataTables sgptCustomDataTables;
void __fastcall DATATBLS_CUSTOM_LoadAll(void* pMemPool);
void __fastcall DATATBLS_CUSTOM_UnloadAll();
void __fastcall DATATBLS_UnloadCharTemplateTxt();