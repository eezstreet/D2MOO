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
 *	LvlOutdoorsFill.txt
 */
struct LvlOutdoorsFillTxt
{
	uint32_t levelId;
	uint32_t presetId;
	int8_t flags;
	int8_t chance;
	int8_t file;
	int8_t pad;
};

/**
 *	All custom data tables.
 */
struct CustomDataTables
{
	int nLvlMazeInsertTxtRecordCount;
	LvlMazeInsertTxt* pLvlMazeInsertTxt;
	int nLvlOutdoorsFillTxtRecordCount;
	LvlOutdoorsFillTxt* pLvlOutdoorsFillTxt;
};

extern CustomDataTables sgptCustomDataTables;
void __fastcall DATATBLS_CUSTOM_LoadAll(void* pMemPool);
void __fastcall DATATBLS_CUSTOM_UnloadAll();
void __fastcall DATATBLS_UnloadCharTemplateTxt();