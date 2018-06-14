// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"

void UMyBlueprintFunctionLibrary::CopyToClipboard(FString StringToCopy)
{
	UE_LOG(LogTemp, Log, TEXT("Copying to clipboard: %s"), *StringToCopy);
	const TCHAR* convertedString = *StringToCopy;
	FPlatformMisc::ClipboardCopy(convertedString);
}
