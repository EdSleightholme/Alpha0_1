// Fill out your copyright notice in the Description page of Project Settings.

#include "BFL_ReadWriteFile.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"


bool UBFL_ReadWriteFile::WriteToFile(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}

bool UBFL_ReadWriteFile::ReadFromFile(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}