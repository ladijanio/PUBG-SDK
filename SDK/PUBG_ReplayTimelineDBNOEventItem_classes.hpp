#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C
// 0x0018 (0x0258 - 0x0240)
class UReplayTimelineDBNOEventItem_C : public UUserWidget
{
public:
	class UBorder*                                     Border_44;                                                // 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     DBNOTooltipText;                                          // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4e961681);
		return ptr;
	}


	struct FText GetToolTipText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
