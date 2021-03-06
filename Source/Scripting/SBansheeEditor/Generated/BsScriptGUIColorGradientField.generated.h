#pragma once

#include "BsScriptEditorPrerequisites.h"
#include "Wrappers/GUI/BsScriptGUIElement.h"
#include "../../../bsf/Source/Foundation/bsfUtility/Image/BsColorGradient.h"
#include "../../../bsf/Source/Foundation/bsfCore/Localization/BsHString.h"

namespace bs
{
	class GUIColorGradientField;
	struct __GUIContentInterop;

	class BS_SCR_BED_EXPORT ScriptGUIColorGradientField : public TScriptGUIElement<ScriptGUIColorGradientField>
	{
	public:
		SCRIPT_OBJ(EDITOR_ASSEMBLY, "BansheeEditor", "GUIColorGradientField")

		ScriptGUIColorGradientField(MonoObject* managedInstance, GUIColorGradientField* value);

	private:
		void onClicked();

		typedef void(BS_THUNKCALL *onClickedThunkDef) (MonoObject*, MonoException**);
		static onClickedThunkDef onClickedThunk;

		static MonoObject* Internal_getValue(ScriptGUIColorGradientField* thisPtr);
		static void Internal_setValue(ScriptGUIColorGradientField* thisPtr, MonoObject* value);
		static void Internal_create(MonoObject* managedInstance, __GUIContentInterop* labelContent, uint32_t labelWidth, MonoString* style);
		static void Internal_create0(MonoObject* managedInstance, __GUIContentInterop* labelContent, MonoString* style);
		static void Internal_create1(MonoObject* managedInstance, MonoObject* labelText, uint32_t labelWidth, MonoString* style);
		static void Internal_create2(MonoObject* managedInstance, MonoObject* labelText, MonoString* style);
		static void Internal_create3(MonoObject* managedInstance, MonoString* style);
	};
}
