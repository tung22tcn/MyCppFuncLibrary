// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FileManagerGeneric.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyFuncLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYCPPFUNCLIBRARY_API UMyFuncLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Tungpm)
		static void ProjectPath(FString & ProjectPath);

	virtual void FindFiles
	(
		TArray < FString >& FoundFiles,
		const TCHAR * Directory,
		const TCHAR * FileExtension
	);

	UFUNCTION(BlueprintCallable, Category = Tungpm)
		static void ImageName(TArray<FString>& Value);

	UFUNCTION(BlueprintCallable, Category = Tungpm)
		static void RunApp(FString AppPath);
};



