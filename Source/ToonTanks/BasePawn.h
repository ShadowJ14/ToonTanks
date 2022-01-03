// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 VisibleAnywhereInt = 12;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 EditAnywhereInt = 22;

	UPROPERTY(VisibleInstanceOnly)
	int32 VisibleInstanceOnlyInt = 11;

	UPROPERTY(EditInstanceOnly)
	int32 EditInstanceOnlyInt = 22;

	UPROPERTY(VisibleDefaultsOnly)
	int32 VisibleDefaultsOnlyInt = 11;

	UPROPERTY(EditDefaultsOnly)
	int32 EditDefaultsOnlyInt = 11;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class UCapsuleComponent *CapsuleComp = nullptr;
	UPROPERTY()
	UStaticMeshComponent *BaseMesh = nullptr;
	UPROPERTY()
	UStaticMeshComponent *TurretMesh = nullptr;
	UPROPERTY()
	USceneComponent *ProjectileSpawnPoint = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
