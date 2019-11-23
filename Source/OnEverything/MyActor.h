// Copyright 2019 Marc O. Rüdel. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class ONEVERYTHING_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY()
	bool bActorIsLoaded = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called by owner actor on position shifting Component should update all relevant data structures to reflect new actor location
	virtual void ApplyWorldOffset(const FVector & InOffset, bool bWorldShift) override;


	// Called after the C++ constructor and after the properties have been initialized, including those loaded from config.This is called before any serialization or other setup has happened.
	virtual void PostInitProperties() override;


	// Do any object - specific cleanup required immediately after loading an object.This is not called for newly - created objects, and by default will always execute on the game thread.
	virtual void PostLoad() override;


	// Called at the end of Rename(), but only if the rename was actually carried out
	virtual void PostRename(UObject * OldOuter, const FName OldName) override;


	// Handles reading, writing, and reference collecting using FArchive. This implementation handles all UProperty serialization, but can be overridden for native variables.
	virtual void Serialize(FArchive & Ar);



	// Instances components for objects being loaded from disk, if necessary.Ensures that component references between nested components are fixed up correctly.
	virtual void PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph) override;


	// Called from ReloadConfig after the object has reloaded its configuration data.
	virtual void PostReloadConfig(class UProperty * PropertyThatWasLoaded) override;


	// Called after duplication & serialization and before PostLoad.Used to e.g.make sure UStaticMesh's UModel gets copied as well. Note: NOT called on components on actor duplication (alt-drag or copy-paste). Use PostEditImport as well to cover that case.
	virtual void PostDuplicate(bool bDuplicateForPIE) override;
	virtual void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;


	// Allows for a specific response from the actor when the actor channel is opened(client side)
	virtual void OnActorChannelOpen(class FInBunch & InBunch, class UNetConnection * Connection) override;


	// Called when an instance of this class is placed(in editor) or spawned.
	virtual void OnConstruction(const FTransform & Transform) override;


	// Handles cleaning up the associated Actor when killing the connection
	virtual void OnNetCleanup(class UNetConnection * Connection) override;


	// Called on client when updated AttachmentReplication value is received for this actor.
	virtual void OnRep_AttachmentReplication() override;


	// Called on clients when Instigator is replicated.
	virtual void OnRep_Instigator() override;


	// Called when owner changes, does nothing by default but can be overridden
	virtual void OnRep_Owner() override;

		
	// ReplicatedMovement struct replication event
	virtual void OnRep_ReplicatedMovement() override;


	// Called on client when updated bReplicateMovement value is received for this actor.
	virtual void OnRep_ReplicateMovement() override;


	// Called on the client when the replication paused value is changed
	virtual void OnReplicationPausedChanged(bool bIsReplicationPaused) override;


	// SerializeNewActor has just been called on the actor before network replication(server side)
	virtual void OnSerializeNewActor(class FOutBunch & OutBunch) override;
		

	// Called on the actor when a new subobject is dynamically created via replication
	virtual void OnSubobjectCreatedFromReplication(UObject * NewSubobject) override;

		
	// Called when an actor is done spawning into the world(from UWorld::SpawnActor), both in the editor and during gameplay For actors with a root component, the location and rotation will have already been set.This is called before calling construction scripts, but after native components have been created
	virtual void PostActorCreated() override;


	// Called after an actor has been moved in the editor
	virtual void PostEditMove(bool bFinished) override;


	// Allow actors to initialize themselves on the C++ side after all of their components have been initialized, only called during gameplay
	virtual void PostInitializeComponents() override;


	// Called after all the components in the Components array are registered, called both in editor and during gameplay
	virtual void PostRegisterAllComponents() override;

		
	//Reset actor to initial state - used when restarting level without reloading.
	virtual void Reset() override;


	// Called before all the components in the Components array are registered, called both in editor and during gameplay
	virtual void PreRegisterAllComponents() override;


	// Called right before components are initialized, only called during gameplay
	virtual void PreInitializeComponents() override;


	// Called to mark all components as pending kill when the actor is being destroyed
	virtual void MarkComponentsAsPendingKill() override;

		
	// Called after all currently registered components are cleared
	virtual void PostUnregisterAllComponents() override;


	// Ensure that all the components in the Components array are registered
	virtual void RegisterAllComponents() override;

	
	// Will reregister all components on this actor.Does a lot of work - should only really be used in editor, generally use UpdateComponentTransforms or MarkComponentsRenderStateDirty.
	virtual void ReregisterAllComponents() override;


	// Rerun construction scripts, destroying all autogenerated components; will attempt to preserve the root component location.
	virtual void RerunConstructionScripts() override;


	// Unregister all currently registered components
	virtual void UnregisterAllComponents(bool bForReregister) override;


};
