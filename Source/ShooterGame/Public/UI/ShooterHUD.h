// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "ShooterHUD.generated.h"

/**
 * 
 */

/*UENUM()*/
enum /*class*/ EShooterCrosshairDirection /*: uint8*/
{
	Left = 0,
	Right,
	Center,
	Top,
	Bottom
};



UCLASS()
class SHOOTERGAME_API AShooterHUD : public AHUD
{
	GENERATED_BODY()

public:
	AShooterHUD();
	
	UPROPERTY()
	FCanvasIcon Crosshair[5];
	
	//ÿ֡���� 
	virtual void DrawHUD() override;

	void DrawCrosshair();

	float ScaleUI;

	//׼������ �� ���� ֮��ļ�����
	UPROPERTY(EditDefaultsOnly, category = Crosshair)
		float CrosshairSpace = 5.f;
};
