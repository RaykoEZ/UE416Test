// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/AudioComponent.h"
#include "RythmPawn.generated.h"


UCLASS()
class RHYTHMTEST_API ARythmPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARythmPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly)
	bool m_onBeat = false;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//beep action
	void BeepAction();	
	
	UFUNCTION(BlueprintCallable, Category = "Music Trigger")
	void setOnBeat(const bool &value);

	UPROPERTY(EditAnywhere)
		// whether button for beat was pressed
		bool m_pressed = false;

	UPROPERTY(EditAnywhere)
		USceneComponent* visualComponent;
	UPROPERTY(EditAnywhere)
		UAudioComponent* audio;
	UPROPERTY(EditAnywhere)
		UAudioComponent* music;
};
