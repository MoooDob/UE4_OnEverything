// Copyright 2019 Marc O. Rüdel. All Rights Reserved.



#include "MySceneComponent.h"
#include "MyActor.h"
#include "UnrealString.h"
#include "HAL/ThreadHeartBeat.h"
#include "HAL/PlatformStackWalk.h"



// Sets default values for this component's properties
UMySceneComponent::UMySceneComponent()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': constructor BEGIN"), *GetName());
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bWantsInitializeComponent = true;
	bWantsOnUpdateTransform = true;

	// ...
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': constructor END"), *GetName());
}


// Called when the game starts
void UMySceneComponent::BeginPlay()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': BeginPlay BEGIN"), *GetName());
	Super::BeginPlay();

	// ...
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': BeginPlay END"), *GetName());
}


// Called every frame
void UMySceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMySceneComponent::OnAttachmentChanged()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnAttachmentChanged BEGIN"), *GetName());
		Super::OnAttachmentChanged();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnAttachmentChanged END"), *GetName());
}

void UMySceneComponent::OnChildAttached(USceneComponent * ChildComponent)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnChildAttached %s BEGIN"), *GetName(), *ChildComponent->GetName());
		Super::OnChildAttached(ChildComponent);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnChildAttached %s END"), *GetName(), *ChildComponent->GetName());
}

void UMySceneComponent::OnChildDetached(USceneComponent * ChildComponent)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnChildDetached %s BEGIN"), *GetName(), *ChildComponent->GetName());
		Super::OnChildDetached(ChildComponent);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnChildDetached %s END"), *GetName(), *ChildComponent->GetName());
}

void UMySceneComponent::OnHiddenInGameChanged()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnHiddenInGameChanged BEGIN"), *GetName());
		Super::OnHiddenInGameChanged();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnHiddenInGameChanged END"), *GetName());
}

void UMySceneComponent::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnUpdateTransform BEGIN"), *GetName());
		Super::OnUpdateTransform(UpdateTransformFlags, Teleport);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnUpdateTransform END"), *GetName());
}

void UMySceneComponent::OnVisibilityChanged()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnVisibilityChanged BEGIN"), *GetName());
		Super::OnVisibilityChanged();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnVisibilityChanged END"), *GetName());
}

bool UMySceneComponent::ShouldCreateRenderState() const
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': ShouldCreateRenderState BEGIN (no END)"), *GetName());
		return Super::ShouldCreateRenderState();
}

void UMySceneComponent::OnRegister()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnRegister BEGIN"), *GetName());
		Super::OnRegister();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnRegister END"), *GetName());
}

void UMySceneComponent::UninitializeComponent()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': UninitializeComponent BEGIN"), *GetName());
		Super::UninitializeComponent();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': UninitializeComponent END"), *GetName());
}

void UMySceneComponent::PostInitProperties()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostInitProperties BEGIN"), *GetName());
		Super::PostInitProperties();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostInitProperties END"), *GetName());
}

void UMySceneComponent::PostLoad()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostLoad BEGIN"), *GetName());
		Super::PostLoad();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostLoad END"), *GetName());
}

void UMySceneComponent::PostRename(UObject * OldOuter, const FName OldName)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostRename %s BEGIN"), *GetName(), *OldName.ToString())
		Super::PostRename(OldOuter, OldName);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostRename %s END"), *GetName(), *OldName.ToString())
}

void UMySceneComponent::Serialize(FArchive & Ar)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': Serialize BEGIN"), *GetName());
		Super::Serialize(Ar);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': Serialize END"), *GetName());

}

void UMySceneComponent::PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostLoadSubobjects BEGIN"), *GetName());
		Super::PostLoadSubobjects(OuterInstanceGraph);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostLoadSubobjects END"), *GetName());
}

void UMySceneComponent::PostReloadConfig(UProperty * PropertyThatWasLoaded)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostReloadConfig %s BEGIN"), *GetName(), *PropertyThatWasLoaded->GetName());
	Super::PostReloadConfig(PropertyThatWasLoaded);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostReloadConfig %s END"), *GetName(), *PropertyThatWasLoaded->GetName());
}

void UMySceneComponent::PostDuplicate(bool bDuplicateForPIE)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostDuplicate bDuplicateForPIE=%s BEGIN"), *GetName(), bDuplicateForPIE?TEXT("TRUE"):TEXT("FALSE"))
	Super::PostDuplicate(bDuplicateForPIE);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostDuplicate bDuplicateForPIE=%s END"), *GetName(), bDuplicateForPIE ? TEXT("TRUE") : TEXT("FALSE"))
}

void UMySceneComponent::PostDuplicate(EDuplicateMode::Type DuplicateMode)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostDuplicate bDuplicateForPIE=%s BEGIN"), *GetName(), DuplicateMode ? TEXT("TRUE") : TEXT("FALSE"));
	Super::PostDuplicate(DuplicateMode);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': PostDuplicate bDuplicateForPIE=%s END"), *GetName(), DuplicateMode ? TEXT("TRUE") : TEXT("FALSE"));
}

void UMySceneComponent::OnUnregister()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnUnregister BEGIN"), *GetName());
		Super::OnUnregister();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnUnregister END"), *GetName());
}

TStructOnScope<FActorComponentInstanceData> UMySceneComponent::GetComponentInstanceData() const
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': GetComponentInstanceData BEGIN (no END)"), *GetName());
	return Super::GetComponentInstanceData();
}

void UMySceneComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnComponentDestroyed %s BEGIN"), *GetName(), bDestroyingHierarchy?TEXT("TRUE"):TEXT("FALSE"))
		Super::OnComponentDestroyed(bDestroyingHierarchy);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnComponentDestroyed %s END"), *GetName(), bDestroyingHierarchy ? TEXT("TRUE") : TEXT("FALSE"))
}

void UMySceneComponent::Activate(bool bReset)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': Activate %s BEGIN"), *GetName(), bReset ? TEXT("TRUE") : TEXT("FALSE"))
		Super::Activate(bReset);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': Activate %s END"), *GetName(), bReset ? TEXT("TRUE") : TEXT("FALSE"))
}

UObject const * UMySceneComponent::AdditionalStatObject() const
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': AdditionalStatObject BEGIN"), *GetName());
		return Super::AdditionalStatObject();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': AdditionalStatObject END"), *GetName());
}

void UMySceneComponent::ApplyWorldOffset(const FVector & InOffset, bool bWorldShift)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': ApplyWorldOffset BEGIN"), *GetName(), *InOffset.ToString(), bWorldShift ? TEXT("TRUE") : TEXT("FALSE"))
		Super::ApplyWorldOffset(InOffset, bWorldShift);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': ApplyWorldOffset END"), *GetName(), *InOffset.ToString(), bWorldShift ? TEXT("TRUE") : TEXT("FALSE"))
}

void UMySceneComponent::Deactivate()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': Deactivate BEGIN"), *GetName());
		Super::Deactivate();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': Deactivate END"), *GetName());
}

void UMySceneComponent::DestroyComponent(bool bPromoteChildren)
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': DestroyComponent BEGIN"), *GetName(), bPromoteChildren ? TEXT("TRUE") : TEXT("FALSE"))
		Super::DestroyComponent(bPromoteChildren);
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': DestroyComponent END"), *GetName(), bPromoteChildren ? TEXT("TRUE") : TEXT("FALSE"))
}

FString UMySceneComponent::GetReadableName() const
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': GetReadableName BEGIN (no END)"), *GetName());
		return Super::GetReadableName();
}

void UMySceneComponent::InitializeComponent()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': InitializeComponent BEGIN"), *GetName());
		Super::InitializeComponent();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': InitializeComponent END"), *GetName());
}

void UMySceneComponent::OnComponentCreated()
{
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnComponentCreated BEGIN"), *GetName());
		Super::OnComponentCreated();
	UE_LOG(LogTemp, Log, TEXT("UMySceneComponent '%s': OnComponentCreated END"), *GetName());
}

