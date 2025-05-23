﻿/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2025 Audiokinetic Inc.
*******************************************************************************/

#pragma once

#include "AkInclude.h"
#include "Containers/Map.h"

namespace WwiseUnrealHelper
{
	WWISESOUNDENGINE_API const TCHAR* GetResultString(AKRESULT InResult);

	/** Define hashing for AkGameObjectID. */
	template<typename ValueType, bool bInAllowDuplicateKeys>
	struct AkGameObjectIdKeyFuncs : TDefaultMapKeyFuncs<AkGameObjectID, ValueType, bInAllowDuplicateKeys>
	{
		static FORCEINLINE uint32 GetKeyHash(AkGameObjectID Key)
		{
			return GetTypeHash((uint64)Key);
		}
	};

	/** Define hashing for AkSpatialAudioID. */
	template<typename ValueType, bool bInAllowDuplicateKeys>
	struct AkSpatialAudioIDKeyFuncs : TDefaultMapKeyFuncs<AkSpatialAudioID, ValueType, bInAllowDuplicateKeys>
	{
		static FORCEINLINE uint32 GetKeyHash(AkSpatialAudioID Key)
		{
			return GetTypeHash((uint64)Key);
		}
	};
};
