// Copyright 2019 Marc O. Rüdel. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CoreGlobals.h"
#include "MySceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ONEVERYTHING_API UMySceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMySceneComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	// Called when AttachParent changes, to allow the scene to update its attachment state
	virtual void OnAttachmentChanged() override;


	// Called after a child scene component is attached to this component. Note: Do not change the attachment state of the child during this call.
	virtual void OnChildAttached(USceneComponent * ChildComponent)  override;


	// Called after a child scene component is detached from this component.Note: Do not change the attachment state of the child during this call.
	virtual void OnChildDetached(USceneComponent * ChildComponent) override;


	// Overridable internal function to respond to changes in the hidden in game value of the component.
	virtual void OnHiddenInGameChanged() override;


	// Native callback when this component is moved
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) override;


	// Overridable internal function to respond to changes in the visibility of the component.
	virtual void OnVisibilityChanged() override; 


	// Return true if CreateRenderState() should be called
	virtual bool ShouldCreateRenderState() const override;


	// Called when a component is registered, after Scene is set, but before CreateRenderState_Concurrent or OnCreatePhysicsState are called.
	virtual void OnRegister() override;


	// Called when a component is unregistered. Called after DestroyRenderState_Concurrent and OnDestroyPhysicsState are called.
	virtual void OnUnregister() override;


	// Called before we throw away components during RerunConstructionScripts, to cache any data we wish to persist across that operation.
	virtual TStructOnScope< FActorComponentInstanceData > GetComponentInstanceData() const override;


	// Called when a component is destroyed
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;


	// Activates the SceneComponent, should be overridden by native child classes.
	virtual void Activate(bool bReset) override;


	// Give a readable name for this component, including asset name if applicable
	virtual UObject const * AdditionalStatObject() const override;


	// Called by owner actor on position shifting Component should update all relevant data structures to reflect new actor location
	virtual void ApplyWorldOffset(const FVector & InOffset, bool bWorldShift) override;

	
	// Deactivates the SceneComponent.
	virtual void Deactivate() override;


	// Unregister the component, remove it from its outer Actor's Components array and mark for pending kill.
	virtual void DestroyComponent(bool bPromoteChildren) override;


	// Returns a readable name for this component, including the asset name if applicable By default this appends a space plus AdditionalStatObject()
	virtual FString GetReadableName() const override;

	// Initializes the component.Occurs at level startup or actor spawn.This is before BeginPlay(Actor or Component).All Components in the level will be Initialized on load before any Actor / Component gets BeginPlay Requires component to be registered, and bWantsInitializeComponent to be true.		
	virtual void InitializeComponent() override;

	
	// Called when a component is created(not loaded).This can happen in the editor or during gameplay
	virtual void OnComponentCreated() override;

	
	// Handle this component being Uninitialized.Called from AActor::EndPlay only if bHasBeenInitialized is true
	virtual void UninitializeComponent() override;


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
		
};
