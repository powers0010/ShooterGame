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
	
	//每帧绘制 
	virtual void DrawHUD() override;

	void DrawCrosshair();

	float ScaleUI;

	//准心中心 和 线条 之间的间隔宽度
	UPROPERTY(EditDefaultsOnly, category = Crosshair)
		float CrosshairSpace = 5.f;
};
