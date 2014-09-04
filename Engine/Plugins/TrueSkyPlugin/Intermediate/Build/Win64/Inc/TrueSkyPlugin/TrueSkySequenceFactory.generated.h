// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef TRUESKYPLUGIN_TrueSkySequenceFactory_generated_h
#error "TrueSkySequenceFactory.generated.h already included, missing '#pragma once' in TrueSkySequenceFactory.h"
#endif
#define TRUESKYPLUGIN_TrueSkySequenceFactory_generated_h

#define UTrueSkySequenceFactory_EVENTPARMS
#define UTrueSkySequenceFactory_RPC_WRAPPERS
#define UTrueSkySequenceFactory_CALLBACK_WRAPPERS
#define UTrueSkySequenceFactory_INCLASS \
	private: \
	static void StaticRegisterNativesUTrueSkySequenceFactory(); \
	friend TRUESKYPLUGIN_API class UClass* Z_Construct_UClass_UTrueSkySequenceFactory(); \
	public: \
	DECLARE_CLASS(UTrueSkySequenceFactory, UFactory, COMPILED_IN_FLAGS(0), 0, TrueSkyPlugin, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API UTrueSkySequenceFactory(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(UTrueSkySequenceFactory) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME UTrueSkySequenceFactory


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
UTrueSkySequenceFactory_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	UTrueSkySequenceFactory_RPC_WRAPPERS \
	UTrueSkySequenceFactory_CALLBACK_WRAPPERS \
	UTrueSkySequenceFactory_INCLASS \
public:


