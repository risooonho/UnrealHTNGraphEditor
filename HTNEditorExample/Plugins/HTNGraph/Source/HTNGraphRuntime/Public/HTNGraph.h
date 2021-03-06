// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Blueprint.h"
#include "HTNGraphNode_Composite.h"
#include "HTNGraph.generated.h"


//--------------------------------------------------------------
// HTNGraphについてのデータを保持する
//--------------------------------------------------------------
UCLASS()
class HTNGRAPHRUNTIME_API UHTNGraph : public UObject
{
	GENERATED_BODY()
public:
	/** root node of loaded tree */
	UPROPERTY()
		UHTNGraphNode_Composite* RootNode;

#if WITH_EDITORONLY_DATA
	/** Graph for htn */
	UPROPERTY()
		class UEdGraph* HTNEdGraph;

	/** Info about the graphs we last edited */
	UPROPERTY()
		TArray<FEditedDocumentInfo> LastEditedDocuments;
#endif

	UPROPERTY(/*EditAnywhere, Category = "HTN"*/)
		UEnum* WorldStateEnumAsset;
	UPROPERTY(/*EditAnywhere, Category = "HTN"*/)
		UEnum* OperatorEnumAsset;
	UPROPERTY(/*EditAnywhere, Category = "HTN"*/)
		UEnum* OperatorParamEnumAsset;
};
