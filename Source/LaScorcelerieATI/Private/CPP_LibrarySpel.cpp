// CPP_LibrarySpel.cpp

#include "CPP_LibrarySpel.h"
#include "SpelDefinitions.h"

void ULibrarySpel::CastAbility(
    FAbilityData AbilityData, 
    FVector StartLocation,
    FVector EndLocation,
    float TimeCharging,
    UObject* Caster
)
{
    // V�rifier si le Caster impl�mente l'interface IBL_Ability
    if (Caster && Caster->GetClass()->ImplementsInterface(UBI_Ability::StaticClass())) {
        // Appeler les diff�rentes fonctions de l'interface pour les effets
        IBI_Ability::Execute_Damage(Caster, AbilityData);
        IBI_Ability::Execute_Dot(Caster, AbilityData);
        IBI_Ability::Execute_Stun(Caster, AbilityData);
        IBI_Ability::Execute_Knockback(Caster, AbilityData);
    }

}
