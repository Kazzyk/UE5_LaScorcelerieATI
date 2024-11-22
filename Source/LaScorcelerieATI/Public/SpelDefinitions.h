// SpelDefinitions.h

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpelDefinitions.generated.h"

// Enum�ration pour le type de zone d'effet (AOE)
UENUM(BlueprintType)
enum class EAoeType : uint8
{
    None     UMETA(DisplayName = "None"),
    Circle   UMETA(DisplayName = "Circle"),
    Cone     UMETA(DisplayName = "Cone"),
    Line     UMETA(DisplayName = "Line")
};


// Enum�ration pour le type de d�g�t
UENUM(BlueprintType)
enum class EDamageType : uint8
{
    None        UMETA(DisplayName = "None"),
    Physical    UMETA(DisplayName = "Physical"),
    Magical     UMETA(DisplayName = "Magical"),
    Elemental   UMETA(DisplayName = "Elemental")
};

// Enum�ration pour le type de d�g�t sur la dur�e (DoT)
UENUM(BlueprintType)
enum class EDotType : uint8
{
    None      UMETA(DisplayName = "None"),
    Poison    UMETA(DisplayName = "Poison"),
    Burn      UMETA(DisplayName = "Burn"),
    Bleed     UMETA(DisplayName = "Bleed")
};

// Enum�ration pour le type d'�tourdissement (Stun)
UENUM(BlueprintType)
enum class EStunType : uint8
{
    None         UMETA(DisplayName = "None"),
    Frezz        UMETA(DisplayName = "Frezz"),
    Paralis      UMETA(DisplayName = "Paralis"),
    Physical     UMETA(DisplayName = "Physical"),

};

// Structure Min/Max pour les valeurs flottantes
USTRUCT(BlueprintType)
struct FMinMax
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MinMax")
    float Min;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MinMax")
    float Max;
};


// D�finir la structure qui correspond � la DataTable
USTRUCT(BlueprintType)
struct FAbilityData : public FTableRowBase
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax StaminaCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax StaminaChargingCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax ManaCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax ManaChargingCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax Range;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    EAoeType AoeType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax AoeRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax AoeAngle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax KnockbackValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax ChargingDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    EDamageType DamageType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax Damage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    float SelfFactor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    EDotType DotType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax DotDmgSec;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax DotDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    EStunType StunType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
    FMinMax StunDuration;
};
