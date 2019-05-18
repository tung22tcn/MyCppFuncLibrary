// Fill out your copyright notice in the Description page of Project Settings.

#include "MyFuncLibrary.h"
#include "Paths.h"
#include "FileManagerGeneric.h"
#include "FileManager.h"
#include "Engine.h"

void UMyFuncLibrary::ProjectPath(FString & ProjectPath)
{
	ProjectPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());
}

void UMyFuncLibrary::FindFiles(TArray<FString>& FoundFiles, const TCHAR * Directory, const TCHAR * FileExtension)
{

	FString MyPath = FPaths::GameDir();
	Directory = *MyPath;

}

void UMyFuncLibrary::ImageName(TArray<FString>& Value)
{
	IFileManager& MyFile = IFileManager::Get();
	const FString MyDirectory = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + "Content/Image/";
	const FString MyExtension = "jpg";
	MyFile.FindFiles(Value, *MyDirectory, *MyExtension);

}

void UMyFuncLibrary::RunApp(FString AppPath)
{
	FPlatformProcess::CreateProc(*AppPath, nullptr, false, false, false, nullptr, 0, nullptr, nullptr, nullptr);

}
