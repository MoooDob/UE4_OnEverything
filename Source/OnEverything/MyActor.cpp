// Copyright 2019 Marc O. Rüdel. All Rights Reserved.



#include "MyActor.h"
#include "MySceneComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMyActor::PostInitProperties()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostInitProperties BEGIN"), *GetName())
		Super::PostInitProperties();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostInitProperties END"), *GetName())
}

void AMyActor::PostLoad()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostLoad BEGIN"), *GetName())
		Super::PostLoad();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostLoad END"), *GetName())
}

void AMyActor::PostRename(UObject * OldOuter, const FName OldName)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostRename %s BEGIN"), *GetName(), *OldName.ToString())
		Super::PostRename(OldOuter, OldName);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostRename %s END"), *GetName(), *OldName.ToString())
}

void AMyActor::Serialize(FArchive & Ar)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': Serialize BEGIN"), *GetName())
		Super::Serialize(Ar);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': Serialize END"), *GetName())

}

void AMyActor::PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostLoadSubobjects BEGIN"), *GetName());
	Super::PostLoadSubobjects(OuterInstanceGraph);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostLoadSubobjects END"), *GetName());
}

void AMyActor::PostReloadConfig(UProperty * PropertyThatWasLoaded)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostReloadConfig PropertyThatWasLoaded=%s BEGIN"), *GetName(), *PropertyThatWasLoaded->GetName());
	Super::PostReloadConfig(PropertyThatWasLoaded);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostReloadConfig PropertyThatWasLoaded=%s END"), *GetName(), *PropertyThatWasLoaded->GetName());
}

void AMyActor::PostDuplicate(bool bDuplicateForPIE)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostDuplicate bDuplicateForPIE=%s BEGIN"), *GetName(), bDuplicateForPIE ? TEXT("TRUE") : TEXT("FALSE"));
	Super::PostDuplicate(bDuplicateForPIE);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostDuplicate bDuplicateForPIE=%s END"), *GetName(), bDuplicateForPIE ? TEXT("TRUE") : TEXT("FALSE"));
}

void AMyActor::PostDuplicate(EDuplicateMode::Type DuplicateMode)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostDuplicate BEGIN"), *GetName());
	Super::PostDuplicate(DuplicateMode);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostDuplicate END"), *GetName());
}

void AMyActor::OnActorChannelOpen(FInBunch & InBunch, UNetConnection * Connection)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnActorChannelOpen BEGIN"), *GetName())
		Super::OnActorChannelOpen(InBunch, Connection);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnActorChannelOpen END"), *GetName())
}


void AMyActor::ApplyWorldOffset(const FVector & InOffset, bool bWorldShift)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': ApplyWorldOffset %s WorldShift=%s BEGIN"), *GetName(), *InOffset.ToString(), bWorldShift ? TEXT("TRUE") : TEXT("FALSE"))
		Super::ApplyWorldOffset(InOffset, bWorldShift);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': ApplyWorldOffset %s WorldShift=%s END"), *GetName(), *InOffset.ToString(), bWorldShift ? TEXT("TRUE") : TEXT("FALSE"))
}


void AMyActor::OnConstruction(const FTransform & Transform)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnConstruction %s BEGIN"), *GetName(), *Transform.ToString())
		Super::OnConstruction(Transform);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnConstruction %s END"), *GetName(), *Transform.ToString())
}

void AMyActor::OnNetCleanup(UNetConnection * Connection)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnNetCleanup BEGIN"), *GetName())
		Super::OnNetCleanup(Connection);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnNetCleanup END"), *GetName())
}

void AMyActor::OnRep_AttachmentReplication()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_AttachmentReplication BEGIN"), *GetName())
		Super::OnRep_AttachmentReplication();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_AttachmentReplication END"), *GetName())
}

void AMyActor::OnRep_Instigator()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_Instigator BEGIN"), *GetName())
		Super::OnRep_Instigator();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_Instigator END"), *GetName())
}

void AMyActor::OnRep_Owner()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_Owner BEGIN"), *GetName())
		Super::OnRep_Owner();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_Owner END"), *GetName())
}

void AMyActor::OnRep_ReplicatedMovement()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_ReplicatedMovement BEGIN"), *GetName())
		Super::OnRep_ReplicatedMovement();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_ReplicatedMovement END"), *GetName())
}

void AMyActor::OnRep_ReplicateMovement()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_ReplicateMovement BEGIN"), *GetName())
		Super::OnRep_ReplicateMovement();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnRep_ReplicateMovement END"), *GetName())
}

void AMyActor::OnReplicationPausedChanged(bool bIsReplicationPaused)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnReplicationPausedChanged bIsReplicationPaused=%s BEGIN"), *GetName(), bIsReplicationPaused ? TEXT("TRUE") : TEXT("FALSE"))
		Super::OnReplicationPausedChanged(bIsReplicationPaused);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnReplicationPausedChanged bIsReplicationPaused=%s END"), *GetName(), bIsReplicationPaused ? TEXT("TRUE") : TEXT("FALSE"))
}

void AMyActor::OnSerializeNewActor(FOutBunch & OutBunch)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnSerializeNewActor BEGIN"), *GetName())
		Super::OnSerializeNewActor(OutBunch);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnSerializeNewActor END"), *GetName())
}

void AMyActor::OnSubobjectCreatedFromReplication(UObject * NewSubobject)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnSubobjectCreatedFromReplication '%s' BEGIN"), *GetName(), *NewSubobject->GetName())
		Super::OnSubobjectCreatedFromReplication(NewSubobject);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': OnSubobjectCreatedFromReplication '%s' END"), *GetName(), *NewSubobject->GetName())
}

void AMyActor::PostActorCreated()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostActorCreated BEGIN"), *GetName())
		Super::PostActorCreated();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostActorCreated END"), *GetName())
}

void AMyActor::PostEditMove(bool bFinished)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostEditMove bFinished=%s BEGIN"), *GetName(), bFinished ? TEXT("TRUE") : TEXT("FALSE"))
		Super::PostEditMove(bFinished);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostEditMove bFinished=%s END"), *GetName(), bFinished ? TEXT("TRUE") : TEXT("FALSE"))
}

void AMyActor::PostInitializeComponents()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostInitializeComponents BEGIN"), *GetName())
		Super::PostInitializeComponents();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostInitializeComponents END"), *GetName())
}

void AMyActor::PostRegisterAllComponents()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostRegisterAllComponents BEGIN"), *GetName())
		Super::PostRegisterAllComponents();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostRegisterAllComponents END"), *GetName())
}

void AMyActor::Reset()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': Reset BEGIN"), *GetName())
		Super::Reset();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': Reset END"), *GetName())
}

void AMyActor::PreRegisterAllComponents()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PreRegisterAllComponents BEGIN"), *GetName())
		Super::PreRegisterAllComponents();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PreRegisterAllComponents END"), *GetName())
}

void AMyActor::PreInitializeComponents()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PreInitializeComponents BEGIN"), *GetName())
		Super::PreInitializeComponents();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PreInitializeComponents END"), *GetName())
}

void AMyActor::MarkComponentsAsPendingKill()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': MarkComponentsAsPendingKill BEGIN"), *GetName())
		Super::MarkComponentsAsPendingKill();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': MarkComponentsAsPendingKill END"), *GetName())
}

void AMyActor::PostUnregisterAllComponents()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostUnregisterAllComponents BEGIN"), *GetName())
		Super::PostUnregisterAllComponents();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': PostUnregisterAllComponents END"), *GetName())
}

void AMyActor::RegisterAllComponents()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': RegisterAllComponents BEGIN"), *GetName())
		Super::RegisterAllComponents();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': RegisterAllComponents END"), *GetName())
}

void AMyActor::ReregisterAllComponents()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': ReregisterAllComponents BEGIN"), *GetName())
		Super::ReregisterAllComponents();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': ReregisterAllComponents END"), *GetName())
}

void AMyActor::RerunConstructionScripts()
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': RerunConstructionScripts BEGIN"), *GetName())
		Super::RerunConstructionScripts();
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': RerunConstructionScripts END"), *GetName())
}

void AMyActor::UnregisterAllComponents(bool bForReregister)
{
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': UnregisterAllComponents bForReregister=%s BEGIN"), *GetName(), bForReregister ? TEXT("TRUE") : TEXT("FALSE"))
		Super::UnregisterAllComponents(bForReregister);
	UE_LOG(LogTemp, Log, TEXT("AMyActor '%s': UnregisterAllComponents bForReregister=%s END"), *GetName(), bForReregister ? TEXT("TRUE") : TEXT("FALSE"))
}
