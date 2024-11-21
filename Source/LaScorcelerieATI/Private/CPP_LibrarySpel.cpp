// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_LibrarySpel.h"

void ULibrarySpel::CastAbility(
    FName AbilityName,
    FVector StartLocation,
    FVector EndLocation,
    float TimeCharging,
    UObject* Caster
)
{
    // V�rification de validit� du Caster
    if (!Caster)
    {
        UE_LOG(LogTemp, Warning, TEXT("ExecuteAbility: Caster is null!"));
        return;
    }

    // Log des param�tres re�us pour v�rification
    UE_LOG(LogTemp, Log, TEXT("Ability: %s, Start: %s, End: %s, TimeCharging: %f"),
        *AbilityName.ToString(),
        *StartLocation.ToString(),
        *EndLocation.ToString(),
        TimeCharging
    );
}
