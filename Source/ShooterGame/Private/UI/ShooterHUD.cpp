// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterHUD.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "ShooterPlayerController.h"



AShooterHUD::AShooterHUD()
{
	static ConstructorHelpers::FObjectFinder<UTexture> HUDMainTextureOb(TEXT("/Game/UI/HUD/HUDMain"));

	Crosshair[EShooterCrosshairDirection::Left] = UCanvas::MakeIcon(HUDMainTextureOb.Object, 43, 402, 25, 9);
	Crosshair[EShooterCrosshairDirection::Right] = UCanvas::MakeIcon(HUDMainTextureOb.Object, 88, 402, 25, 9);
	Crosshair[EShooterCrosshairDirection::Top] = UCanvas::MakeIcon(HUDMainTextureOb.Object, 74, 371, 9, 25);
	Crosshair[EShooterCrosshairDirection::Bottom] = UCanvas::MakeIcon(HUDMainTextureOb.Object, 74, 415, 9, 25);
	Crosshair[EShooterCrosshairDirection::Center] = UCanvas::MakeIcon(HUDMainTextureOb.Object, 75, 403, 7, 7);


}

void AShooterHUD::DrawHUD()
{
	ScaleUI = Canvas->ClipY / 1080.f;

	DrawCrosshair();
}

void AShooterHUD::DrawCrosshair()
{
	AShooterPlayerController* playerController = Cast<AShooterPlayerController>(PlayerOwner);

	if (playerController)
	{
		float CenterX, CenterY;
		CenterX = Canvas->ClipX / 2.f;
		CenterY = Canvas->ClipY / 2.f;

		//调用canvas绘制接口
		Canvas->DrawIcon(Crosshair[EShooterCrosshairDirection::Center], CenterX - ScaleUI * Crosshair[EShooterCrosshairDirection::Center].UL / 2.f,
			CenterY - ScaleUI *Crosshair[EShooterCrosshairDirection::Center].VL / 2.f, ScaleUI);

		Canvas->DrawIcon(Crosshair[EShooterCrosshairDirection::Left], CenterX - ScaleUI * (Crosshair[EShooterCrosshairDirection::Center].UL / 2.f + Crosshair[EShooterCrosshairDirection::Left].UL + CrosshairSpace),
			CenterY - ScaleUI * (Crosshair[EShooterCrosshairDirection::Left].VL / 2.f), ScaleUI);
		Canvas->DrawIcon(Crosshair[EShooterCrosshairDirection::Right], CenterX + ScaleUI * (Crosshair[EShooterCrosshairDirection::Center].UL / 2.f + CrosshairSpace),
			CenterY - ScaleUI * (Crosshair[EShooterCrosshairDirection::Right].VL / 2.f), ScaleUI);

		Canvas->DrawIcon(Crosshair[EShooterCrosshairDirection::Top], CenterX - ScaleUI * Crosshair[EShooterCrosshairDirection::Top].UL / 2.f,
			CenterY - ScaleUI * (Crosshair[EShooterCrosshairDirection::Center].UL / 2.f + CrosshairSpace + Crosshair[EShooterCrosshairDirection::Top].VL), ScaleUI);
		Canvas->DrawIcon(Crosshair[EShooterCrosshairDirection::Bottom], CenterX - ScaleUI * Crosshair[EShooterCrosshairDirection::Bottom].UL / 2.f,
			CenterY + ScaleUI * (Crosshair[EShooterCrosshairDirection::Center].UL / 2.f + CrosshairSpace), ScaleUI);
	}
}