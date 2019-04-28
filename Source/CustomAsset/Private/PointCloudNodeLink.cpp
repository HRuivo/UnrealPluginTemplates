// Fill out your copyright notice in the Description page of Project Settings.


#include "PointCloudNodeLink.h"
#include "Json.h"
#include "JsonObjectConverter.h"


void UPointCloudNodeLink::ReadFromJsonString(const FString InJsonString)
{
	bool success = FJsonObjectConverter::JsonObjectStringToUStruct(InJsonString, &PointCloudData, 0, 0);
}
